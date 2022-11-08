#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include <fstream>

class User
{
    public:
        User ();
        User(std::string jmeno,std::string prijmeni,int vek, float vyska, std::string vzdelani);
        virtual ~User();
        void vypis () const;

    protected:

    private:
        std::string jmeno_v, prijmeni_v, vzdelani_v;
        int vek_v;
        float vyska_v;
};

#endif // USER_H
