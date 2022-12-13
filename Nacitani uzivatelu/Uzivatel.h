#ifndef UZIVATEL_H
#define UZIVATEL_H
#include <iostream>

#include <vector>

using namespace std;

class Uzivatel

{
    public:
        Uzivatel();
        Uzivatel(string prijmeni_in, string jmeno_in, int vek_in, float vyska_in, int vzdelani_in);
        string prijm() const;
        string jme() const;
        int ve() const;
        float vysk() const;
        int vzde() const;

    protected:

    private:
        string prijmeni, jmeno;
        int vek, vzdelani;
        float vyska;
};

#endif // UZIVATEL_H
