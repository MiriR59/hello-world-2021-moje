#include <iostream>
#include <fstream>
#include <vector>
#include "Uzivatel.h"
#include <algorithm>

using namespace std;

vector<Uzivatel> nacti(vector<Uzivatel> uzivatele)
{
cout << "Zadejte vase jmeno: ";
    string jmeno;
    cin >> jmeno;
    cout << "Vase jmeno je: " << jmeno << "\n";

cout << "Zadej vase prijmeni: ";
    string prijmeni;
    cin >> prijmeni;
    cout << "Vase prijmeni je: " << prijmeni << "\n";

cout << "Zadej vas vek: ";
    int vek;
    cin >> vek;

    do
    {
        if(vek<6)
        {
            cout << "Na tohle jsi jeste mlady.\n";
            cout << "Zkus to znovu: ";
            cin >> vek;
        }
        else if (vek>120)
        {
            cout << "Zas bych to s tim vekem neprehanel.\n";
            cout << "Zkus to znovu: ";
            cin >> vek;
        }
        else
        {
            cout << "Vas vek je: " << vek << "\n";
        }
    }while(vek>120||vek<6);

cout << "Zadejte vasi vysku v cm: ";
    float vyska;
    cin >> vyska;

    do{
        if(vyska < 100)
        {
            cout << "Zadejte vasi skutecnou vysku.\n";
            cout << "Zkuste to znovu: ";
            cin >> vyska;
        }
        else if (vyska>250)
        {
            cout << "Zadejte vasi skutecnou vysku.\n";
            cout << "Zkuste to znovu: ";
            cin >> vyska;
        }
        else
        {
            cout << "Vase vyska je " << vyska << "\n";
        }
    }while(vyska > 250||vyska<100);

cout << "Zadejte maximalni dosazene vzdelani (zs=0, ss=1, vs=2): ";
    int vzdelani;
    cin >> vzdelani;

    do
    {
        if(vzdelani == 0)
        {
            cout << "Vase vzdelani je zakladni.\n";
        }
        else if (vzdelani == 1)
        {
            cout << "Vase vzdelani je stredoskolske.\n";
        }
        else if (vzdelani == 2)
        {
            cout << "Vase vzdelani je vysokoskolske.\n";
        }
        else
        {
            cout << "Zadane vzdelani je neplatne, zkuste to znovu.\n";
            cout << "Zadejte novy udaj: ";
            cin >> vzdelani;
        }
    }while(vzdelani>2||vzdelani<0);

    uzivatele.push_back(Uzivatel(prijmeni,jmeno,vek,vyska,vzdelani));

    return uzivatele;

}

void ukladani(vector<Uzivatel> uzivatele)
{
    ofstream ulozTo ("users.txt");

    for(Uzivatel k : uzivatele)
    {
        ulozTo << k.prijm();
        ulozTo << " ";
        ulozTo << k.jme();
        ulozTo << " ";
        ulozTo << k.ve();
        ulozTo << " ";
        ulozTo << k.vysk();
        ulozTo << " ";
        ulozTo << k.vzde();
        ulozTo << "\n";
    }
    return;
}

struct Trideni
{
    bool operator()(class Uzivatel& a1 , class Uzivatel& a2) const
    {
        return a1.prijm() < a2.prijm();
    }

};

vector<Uzivatel> serazeno(vector<Uzivatel> a)
{
    sort(a.begin(),a.end(), Trideni());
    return a;
}

int main()
{
    int u;
    vector<Uzivatel> uzivatele;

    do
    {
        u = 0;
        uzivatele = nacti(uzivatele);
        cout << "Pro pridani dalsi osoby napiste 1: ";
        cin >> u;
    }while(u==1);

    vector<Uzivatel> uzivatele2;
    uzivatele2 = serazeno(uzivatele);

    ukladani(uzivatele2);

return 0;
}
