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

int main()
{
  int x, c;
  cout << "Dati numarul: ";
  cin >> x;

  int sum = sumaCifrelor(x); // aici chemam functia si o stocam in variabila sum
  cout << "Suma cifrelor numarului este: " << sum;

  return 0;
}


