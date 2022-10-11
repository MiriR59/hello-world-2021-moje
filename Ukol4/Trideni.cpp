#include <iostream>
#include <vector>
#include <fstream>
#include <string>

    std::vector <int> nacti(std::string data)
    {
    std::ifstream soubor(data);

    std::vector <int> vektor;

    int cislo = 0;
    soubor >> cislo;


    while(!soubor.eof())
        {
        vektor.push_back(cislo);
        soubor >> cislo;
        }
        return vektor;
    }

int main()
{
    //std::vector <int> muj_vektor {6,4,5,3,1,2};
    std::vector <int> muj_vektor = nacti("data.txt");
    std::cout << "Nacteno " << muj_vektor.size() << " cisel" << std::endl;
    std::vector <int> setrizeno (muj_vektor.size(),0);

    for (int p=0; p < muj_vektor.size(); ++p)
    {
        int umisteni=0;
        for (int q=0; q < muj_vektor.size(); ++q)
            {
                if (muj_vektor[p] > muj_vektor[q])
                {
                    umisteni=umisteni+1;
                }
            }
        setrizeno[umisteni]=muj_vektor[p];
    }

    for (int r=0; r < muj_vektor.size(); ++r)
    {
        if (setrizeno[r+1]==0)
        {
            setrizeno[r+1]=setrizeno[r];
        }
    }

    for (int x : setrizeno)
    {
    std::cout << "serazeny vektor: " << x << std::endl;
    }

    return 0;
}


