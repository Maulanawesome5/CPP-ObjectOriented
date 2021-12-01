#ifndef __MASTER
#define __MASTER

#include <string>

class Master{
    private:
        std::string masterName;
        double masterHP;
        double masterMP;
        double healthBase;
        double manaBase;
    
    public:
        Master(const char*, double, double);
        ~Master();
        void masterInfo();
};

#endif