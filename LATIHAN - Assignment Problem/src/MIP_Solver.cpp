#include <vector>

#include "ortools/base/logging.h"
#include "ortools/linear_solver/linear_solver.h"

namespace operations_research {
    void AssignmentMip(){
        // Data
        const std::vector<std::vector<double>> costs{
            {90, 80, 75, 70},   {35, 85, 55, 65},   {125, 95, 90, 95},
            {45, 110, 95, 115}, {50, 100, 90, 100},
        };
        const int num_workers = costs.size();
        const int num_tasks = costs[0].size();
        
        /* 
            Solver
            Create the mip solver with the SCIP backend.
        */
        std::unique_ptr<MPSolver> solver(MPSolver::CreateSolver("SCIP"));
        if (!solver) {
            LOG(WARNING) << "SCIP solver tidak tersedia.";
            return;
        }

        /*
            Variable
            x[i][j] is an array of 0-1 variables, which will be 1
            if worker i is assigned to task j.
        */
        std::vector<std::vector<const MPVariable*>> x(
            num_workers, std::vector<const MPVariable*>(num_tasks));
        for (int i = 0; i < num_workers; ++i) {
            for (int j = 0; j < num_tasks; ++j) {
                x[i][j] = solver->MakeIntVar(0, 1, "");
            }
        }

        /*
            Constraint
            Each worker is assigned to at most one task.
        */
        for (int i = 0; i < num_workers; ++i) {
            LinearExpr worker_sum;
            for (int j = 0; j < num_tasks; ++j) {
                worker_sum += x[i][j];
            }
            solver->MakeRowConstraint(worker_sum <= 1.0);
        }

        /* Each task is assigned to exactly one worker. */
        for (int j = 0; j < num_tasks; ++j) {
            LinearExpr task_sum;
            for (int i = 0; i < num_workers; ++i) {
                task_sum += x[i][j];
            }
            solver->MakeRowConstraint(task_sum == 1.0);
        }

        /* Objective */
        MPObjective* const objective = solver->MutableObjective();
        for (int i = 0; i < num_workers; ++i) {
            for (int j = 0; j < num_tasks; ++j) {
                objective->SetCoefficient(x[i][j], costs[i][j]);
            }
        }
        objective->SetMinimization();

        /* Solve */
        const MPSolver::ResultStatus result_status = solver->Solve();

        /* 
            Print Solution.
            Check that the problem has a feasible solution. 
        */
        if (result_status != MPSolver::OPTIMAL &&
            result_status != MPSolver::FEASIBLE) {
            LOG(FATAL) << "No solution found.";
        }

        LOG(INFO) << "Total cost = " << objective->Value() << "\n\n";

        for (int i = 0; i < num_workers; ++i) {
            for (int j = 0; j < num_tasks; ++j) {
                // Test if x[i][j] is 0 or 1 (with tolerance for floating point
                // arithmetic).
                if (x[i][j]->solution_value() > 0.5) {
                    LOG(INFO) << "Worker " << i << " assigned to task " << j
                        << ".  Cost = " << costs[i][j];
                }
            }
        }
    } // end of void Assignment MIP
} // end Namespace Operation Research

int main(int argc, char const *argv[])
{
    operation_research::AssignmentMip();
    return EXIT_SUCCESS;
}
