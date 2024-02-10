#include <iostream>
using namespace std;

//void maxim(int max)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		max = a;
//		if (max > a)max = a;
//	}
//}

int main()
{
	int n, i, max, a;
	cout << "cate numere are sirul? "; 
	cin >> n;
	cout << "dati cele " << n << " numere: ";
	for (i = 1; i <= n; i++)
	{
		max = a;
		cin >> a;

	}
	for (i = 1; i <= n; i++)
		if (max > a) max = a;
	cout << max;
	

	return 0;
}