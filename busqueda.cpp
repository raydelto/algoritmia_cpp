#include <iostream>
#include <vector>

using namespace std;

bool BusquedaLineal(vector<int> &numeros, int n)
{
    size_t vueltas = 0;
    for (const auto &i : numeros)
    {
        vueltas++;
        if (i == n)
        {
            cout << "vueltas = " << vueltas << endl;
            return true;
        }
    }
    cout << "vueltas = " << vueltas << endl;
    return false;
}

int main()
{
    vector<int> numeros = {1, 2, 3, 4, 5};
    int n = 10;
    if (BusquedaLineal(numeros, n))
    {
        cout << n << " está contenido en el arreglo" << endl;
    }
    else
    {
        cout << n << " no está contenido en el arreglo" << endl;
    }
    return 0;
}