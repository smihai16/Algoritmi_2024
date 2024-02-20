#include <iostream>
using namespace std;

int main()
{
    int n, i, a, max;
    cout << "Cate numere are sirul? ";
    cin >> n;
    cout << "Dati cele " << n << " numere: ";
    cin >> max;
    for (i = 2; i <= n; i++)
    {
        cin >> a;
        if (max < a)max = a;
    }
    cout << "Cea mai mare valoare din sir este: " << max;

    return 0;
}


