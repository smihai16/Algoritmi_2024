#include <iostream>
using namespace std;

int sumaCifrelor(int x) //schimbam functia sa fie int
{
  int s = 0, c; // initializam s in interior functiei
  while (x != 0)
  {
    c = x % 10;
    s = s + c;
    x = x / 10;
  }
  return s; // Returnam suma calculata
}

int invers(int a)
{
    int inv = 0, c;
    while (a != 0)
    {
        c = a % 10;
        inv = inv * 10 + c;
        a = a / 10;
    }
    return inv;
}

//INVERSUL UNUI NUMAR:
//int main()
//{
//  int c,a;
//  cout << "Dati numarul: ";
//  cin >> a;
//  int inv = invers(a);
//  cout << "Inversul numarului este: " << inv;
//  
//  return 0;
//}

//NUMAR PRIM:
//int main()
//{
//    int a, i, sw=1;
//    cout << "Dati numarul: ";
//    cin >> a;
//    for (i = 2; i <= a / 2; i++)
//        if (a % i == 0) sw = 0;
//    if (sw == 1) cout << "Numarul este prim! ";
//    else cout << "Numarul nu este prim! ";
//
//    return 0;
//}

//CMMDC:
int main()
{
    int a, b, x, y;
    cout << "Dati cele doua numere: ";
    cin >> a >> b;
    x = a;
    y = b;
    while(a!=b)
        if (a > b) a = a - b;
        else b = b - a;
    cout << "cmmdc a lui " << x << " si " << y << " este: " << a;
}

