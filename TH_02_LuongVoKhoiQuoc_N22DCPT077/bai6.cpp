
#include <iostream>

using namespace std;

void nhap(int **, const int &);
int tong_cheo(int **, const int &);

int main()
{
	int n = 0;
	while (n <= 0)
	{
		cout << "Nhap n: ";
		cin >> n;
	}
	
	int **a = new int*[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}
	
	nhap(a, n);
	cout << "Tong cac phan tu co tren duong cheo chinh la: " << tong_cheo(a, n);
	
	for (int i = 0; i < n; i++)
	{
		delete [] a[i];
	}
	delete [] a;
	return 0;
}

void nhap(int **a, const int &n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

int tong_cheo(int **a, const int &n)
{
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		result += a[i][i];
	}
	return result;
}
