#include <iostream>
using std::string;

class AbstractEmployee{
    /* Implementasi untuk pillar Abstraksi
    menggunakan keyword C++ yang bernama 'virtual' */
    virtual void askForPromotion() = 0;
};

class Employee: AbstractEmployee{
    private:
        string Company;
        int Age;
    
    protected:
        string Name;

    public:
        void setName(string name){
            // Setter implementation of encapsulation
            Employee::Name = name;
        }

        string getName(){
            // Getter implementation of encapsulation
            return Employee::Name;
        }

        void setCompany(string company){
            // Setter implementation of encapsulation
            Employee::Company = company;
        }

        string getCompany(){
            // Getter implementation of encapsulation
            return Employee::Company;
        }

        void setAge(int age){
            // Setter implementation of encapsulation
            Employee::Age = age;
        }

        int getAge(){
            // Getter implementation of encapsulation
            return Employee::Age;
        }

        Employee(string name, string company, int age){
            // Constructor
            Employee::Name = name;
            Employee::Company = company;
            Employee::Age = age;
        }

        ~Employee(){
            // Destructor
        }

        void introduceYourself(){
            // Method
            std::cout << "My Name is " << Employee::Name;
            std::cout << ", Age " << Employee::Age << " years old." << std::endl;
            std::cout << "I'am working in " << Employee::Company << std::endl;
        }

        // Implementasi dari pillar Abstraksi
        void askForPromotion(){
            if (Employee::Age > 30){
                std::cout << Employee::Name << " got promoted!" << std::endl;
            } else {
                std::cout << Employee::Name << ", sorry NO promotion for you!" << std::endl;
            }
        }

        // Implementasi dari pillar Polymorphism, tambahkan keyword 'virtual'
        virtual void Work(){
            std::cout << Employee::Name << " is checking email, task backlog, performing task..." << std::endl;
        }
};

/* Implementasi Pewarisan 'inheritance'. Tambahkan keyword 'public' agar class Developer
bisa mengakses method dari class Employee */
class Developer: public Employee{
    public:
        string FavProgrammingLanguage;
        
        // Bentuk inheritance untuk bagian constructor
        Developer(string name, string company, int age, string favProgrammingLanguage)
        : Employee(name, company, age){
            FavProgrammingLanguage = favProgrammingLanguage;
        }
        
        ~Developer(){
            // Destructor
        }

        void FixBug(){
            /* 'Name' merupakan variabel class Employee, bisa diakses kedalam class Developer
            karena mengubah access modifier yang awalnya private menjadi protected */
            std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
        }

        void Work(){
            std::cout << Name << " is writting " << FavProgrammingLanguage << " code." << std::endl;
        }
};

class Teacher: public Employee{
    public:
        string Subject;

        // Bentuk inheritance untuk bagian constructor
        Teacher(string Name, string Company, int Age, string subject): Employee(Name, Company, Age){
            Subject = subject;
        }
        
        void PrepareLesson(){
            std::cout << Name << " is preparing " << Subject << " lesson." << std::endl;
        }

        void Work(){
            std::cout << Name << " is teaching " << Subject << " lesson." << std::endl;
        }
};

int main(int argc, char const *argv[])
{
    Employee employee1 = Employee("Saldina", "YouTube-CodeBeauty", 25);
    employee1.introduceYourself();
    Employee employee2 = Employee("John", "Amazon", 35);
    employee2.introduceYourself();

    employee1.askForPromotion();
    employee2.askForPromotion();

    // Pembuatan object yang telah di inherit dari super class
    Developer developer1 = Developer("Saldina", "YouTube-CodeBeauty", 25, "C++");
    developer1.FixBug();

    // inheritance method dari super class, harus menambahkan keyword 'public' pada bagian nama class
    developer1.askForPromotion();

    // Pembuatan object yang telah di inherit dari super class
    Teacher teacher1 = Teacher("Issei Hyoudo", "Highschool DXD", 31, "Erotic");
    teacher1.PrepareLesson();
    teacher1.askForPromotion(); //Tambahkan keyword 'public' dulu ya

    // Dibawah ini contoh penerapan pillar Polymorphism
    Employee* employee3 = &developer1;
    Employee* employee4 = &teacher1;
    employee3->Work();
    employee4->Work();
    
    return 0;
}

/*
    Class 'Access Modifier' dalam bahasa C++ ada 3 macam, yaitu
    public, private, dan protected.

    Dalam membuat class constructor, terdapat 3 aturan yaitu:
    1. Constructor tidak memiliki return
    2. Constructor memiliki nama yang sama dengan class
    3. Constructor harus public.

    4 Pillar dalam Object Oriented Programming adalah
    Abstraksi, Enkapsulasi, Pewarisan, Polymorphism.

    Enkapsulasi -> Membuat semua property (variabel) class private, membuat
    getter dan setter untuk mengakses property class.

    Abstraksi -> Membuat class abstrak yang memiliki function atau variabel
    yang kemudian akan di wariskan (inherit) kepada super class maupun sub class.

    Pewarisan / Inheritance -> Membuat child class atau sub class yang
    mewarisi class atribut berupa variabel atau method dari super class.

    Polymorphism -> Ability of an object or a method to have many forms. The most common use of
    a polymorphism in programming is when a parent class reference is used to refer to a child class object.
*/