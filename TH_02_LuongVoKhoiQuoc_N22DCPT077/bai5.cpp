
#include <iostream>

using namespace std;

void Eratosthenes(int *, int &, int x);

int main()
{
	int *a = new int[1000];
	a[0] = 2;
	int n = 1;
	
	for (int i = 3; i < 1000; i++)
	{
		Eratosthenes(a, n, i);
	}

	cout << "So luong so nguyen to < 1000 la " << n;

	delete [] a;
	return 0;
}

void Eratosthenes(int *a, int &n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (x % a[i] == 0)
		{
			return;
		}
	}

	a[n] = x;
	n++;
}
