#include "User.h"
#include <iostream>
#include <cmath>


User::User(std::string jmeno, std::string prijmeni, int vek, float vyska, std::string vzdelani)
{
    jmeno_v = jmeno;
    prijmeni_v = prijmeni;
    vek_v = vek;
    vyska_v = vyska;
    vzdelani_v = vzdelani;
}

void User::vypis () const
{
    std::cout << jmeno_v << prijmeni_v << std::endl;
}

User::~User()
{
    //dtor
}
