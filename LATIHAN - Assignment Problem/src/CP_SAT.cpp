#include "ortools/sat/cp_model.h"

namespace operations_research {    
    namespace sat {
        void IntegerProgrammingExample() {
            /* Data */
            const std::vector<std::vector<double>> costs{
                {90, 80, 75, 70},   {35, 85, 55, 65},   {125, 95, 90, 95},
                {45, 110, 95, 115}, {50, 100, 90, 100},
            };
            const int num_workers = costs.size();
            const int num_tasks = costs[0].size();

            /* Model */
            CpModelBuilder cp_model;

            /* 
                Variables
                x[i][j] is an array of Boolean variables. x[i][j] is true
                if worker i is assigned to task j. 
            */
            std::vector<std::vector<BoolVar>> x(num_workers,
                                                std::vector<BoolVar>(num_tasks));
            for (int i = 0; i < num_workers; ++i) {
                for (int j = 0; j < num_tasks; ++j) {
                    x[i][j] = cp_model.NewBoolVar();
                }
            }

            /* 
                Constraints
                Each worker is assigned to at most one task.
            */
            for (int i = 0; i < num_workers; ++i) {
                LinearExpr worker_sum;
                for (int j = 0; j < num_tasks; ++j) {
                    worker_sum.AddTerm(x[i][j], 1);
                }
                cp_model.AddLessOrEqual(worker_sum, 1);
            }
            
            /* Each task is assigned to exactly one worker. */
            for (int j = 0; j < num_tasks; ++j) {
                LinearExpr task_sum;
                for (int i = 0; i < num_workers; ++i) {
                    task_sum.AddTerm(x[i][j], 1);
                }
                cp_model.AddEquality(task_sum, 1);
            }

            /* Objective */
            LinearExpr total_cost;
            for (int i = 0; i < num_workers; ++i) {
                for (int j = 0; j < num_tasks; ++j) {
                    total_cost.AddTerm(x[i][j], costs[i][j]);
                }
            }
            cp_model.Minimize(total_cost);

            /* Solve */
            const CpSolverResponse response = Solve(cp_model.Build());

            /* Print solution. */
            if (response.status() == CpSolverStatus::INFEASIBLE) {
                LOG(FATAL) << "No solution found.";
            }

            LOG(INFO) << "Total cost: " << response.objective_value();
            LOG(INFO);
            for (int i = 0; i < num_workers; ++i) {
                for (int j = 0; j < num_tasks; ++j) {
                    if (SolutionBooleanValue(response, x[i][j])) {
                        LOG(INFO) << "Task " << i << " assigned to worker " << j
                            << ".  Cost: " << costs[i][j];
                    }
                }
            }
        } /* end void IntegerProgramming */
    }  /* end namespace sat */
}  /* end namespace operations_research */


int main(int argc, char const *argv[])
{
    operations_research::sat::IntegerProgrammingExample();
    return EXIT_SUCCESS;
}
