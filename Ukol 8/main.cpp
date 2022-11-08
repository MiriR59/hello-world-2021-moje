#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "User.h"

int main()
{
    std::string jmeno;
    std::string prijmeni;
    int vek;
    float vyska;
    std::string vzdelani;
    std::string pokracovat;
    pokracovat == "ano";
do
{
    std::cout << "Zadejte krestni jmeno:";
    std::cin >> jmeno;

    std::cout << "Zadejte prijmeni: ";
    std::cin >> prijmeni;

    while(1)
    {
        std::cout << "Zadejte vek: ";
        std::cin >> vek;
        if (vek > 15 && vek < 100)
        {
            break;
        }
        std::cout << "Nelzi, zadejte spravny vek" << std::endl;
    }

    while(1)
    {
        std::cout << "Zadejte svou vysku: ";
        std::cin >> vyska;
        if (vyska > 100 && vyska < 230)
        {
            break;
        }
        std::cout << "Nelzi, zadejte spravnou vysku" << std::endl;
    }

    while(1)
    {
        std::cout << "Zadejte nejvyssi dosazene vzdelani (zs, ss, vs): ";
        std::cin >> vzdelani;
        if (vzdelani == "zs")
        {
            break;
        }
        else if (vzdelani == "ss")
        {
            break;
        }
        else if (vzdelani == "vs")
        {
            break;
        }
        std::cout << "Nelzi, zadejte spravne vzdelani" << std::endl;
    }
        std::cout << "Jmeno je: " << jmeno << " " << prijmeni<< std::endl;
        std::cout << "Vek je: " << vek << std::endl;
        std::cout << "Dosazene vzdelani: " << vzdelani << std::endl;

        k =User(jmeno, prijmeni, vek, vyska, vzdelani);
        k.vypis();
    while (1)
    {
        std::cout << "Prejete si zadat dalsi osobu?? (ano/ne)" << std::endl;
        std::cin >> pokracovat;
        if (pokracovat == "ano")
        {
        break;
        }
        else if (pokracovat == "ne")
        {
        break;
        }
    }
}
while (pokracovat == "ano");

    return 0;
}
