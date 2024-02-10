#include <iostream>
using namespace std;

int main()
{
    int a, b, aux;
    cout << "Dati numarul a: ";
    cin >> a;
    cout << "Dati numarul b: ";
    cin >> b;
    aux = a;
    a = b;
    b = aux;
    cout << "a: " << a << "\nb: " << b;

    return 0;
}

