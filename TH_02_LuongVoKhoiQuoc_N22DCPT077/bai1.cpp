
#include <iostream>

using namespace std;

int tong (int *, int *);

int main()
{
	int n = 0;
	int *so, *t;
	t = new int(0);
	so = new int(0);
	
	while (n <= 0)
	{
		cout << "Nhap n = ";
		cin >> n;
	}
	
	cout <<"Tong T = ";
	for (int i = 1; i < n; i ++)
	{
		*so = i;
		*t = tong(t, so);
		cout << i << "+";
	}
	*so = n;
	*t = tong(t, so);
	cout << n << " = " << *t;
	
	delete t;
	delete so;
}

int tong (int *a, int *b)
{
	return *a + *b;
}
