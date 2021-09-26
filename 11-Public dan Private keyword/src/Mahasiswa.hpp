#ifndef __MAHASISWA
#define __MAHASISWA

#include <string>

class Mahasiswa{
    // Attribute class
    public: // Ini dapat diakses oleh apapun
        std::string namePublic;
    
    private: // Ini hanya bisa diakses oleh class sendiri
        std::string namePrivate;

    // Methods dan constructor
    public:
        //Constructor selalu public
        Mahasiswa(const char* name){
            this->namePublic = name;
            this->namePrivate = name;
        }
};

#endif