#include <iostream>
#include <vector>
#include <random>

int main()
{
    std::random_device dev;
    std::mt19937 gen(dev());
    std::uniform_int_distribution<std::mt19937::result_type> kostka(0,10);

    std::vector<int> cisla(10);

    for (int& x : cisla)
    {
        x = kostka(gen);
    }

    double h = 0.0;
    for (int i=0; i<=cisla.size(); ++i)
    {
        if (cisla[i] > 0)
        {
            h += 1 / cisla[i];
        }

    }
    h = 1.0 / h;

    std::cout << "Harmonicky prumer nahodnych cisel je: " << h << "\n";
}
