#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string jmeno;
    std::string prijmeni;
    int vek;
    std::string vzdelani;

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
        std::cout << "Zadejte vzdelani (ss, vs): ";
        std::cin >> vzdelani;
        if (vzdelani == "ss")
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

    return 0;
}


