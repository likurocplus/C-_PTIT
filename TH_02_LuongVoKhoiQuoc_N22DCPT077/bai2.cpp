
#include <iostream>

using namespace std;

void swap(int *, int *);
void sap_xep(int [], int length);
void xuat_mang(int [], int length);

int main()
{
	int n = 0;
	while (n <= 0)
	{
		cout << "Nhap n = ";
		cin >> n;
	}
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << " vao mang: ";
		cin >> a[i];
	}
	
	cout << "Mang truoc khi sap xep: ";
	xuat_mang(a, n);
	
	sap_xep(a, n);
	cout << "Mang sau khi sap xep: ";
	xuat_mang(a, n);
	
	delete [] a;
	return 0;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sap_xep(int a[], int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (a[j] < a[j+1])
			{
				swap(a[j], a[j+1]);
			}
		}
	}
}

void xuat_mang(int a[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
