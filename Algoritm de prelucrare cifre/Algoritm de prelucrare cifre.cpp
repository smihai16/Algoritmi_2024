#include <iostream>
using namespace std;

//void sumaCifrelor(int x)
//{
//    int s, c;
//    while (x != 0)
//    {
//        c = x % 10;
//        s = s + c;
//        x = x / 10;
//    }
//    cout << "Suma cifrelor numarului este: " << s;
//}

int main()
{
    int x, c, s=0;
    cout << "Dati numarul: ";
    cin >> x;
    while (x != 0)
    {
        c = x % 10;
        s = s + c;
        x = x / 10;
    }
    cout << "Suma cifrelor numarului este: " << s;

    return 0;
}


