#include <iostream>
using namespace std;

void afisareDivizori(int n)
{
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0) cout << i << ' ';
}

void patrat(int n)
{
	cout << "\nPatratul lui " << n << "este " << n * n;
}


int main()
{
	int x;
	cout << "Dati-l pe X: ";
	cin >> x;
	afisareDivizori(x);
	patrat(x);
	return 0;
}
