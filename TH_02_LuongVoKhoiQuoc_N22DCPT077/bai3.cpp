
#include <iostream>
#include <ctime>
#include <cstdlib>

#define MAX 1000

using namespace std;

void swap(int *, int *);
void sap_xep(int [], const int &);
void xuat_mang(int [], const int &);
void xoa_so_am(int [], int &);
void insert(int *, int &, int x);

int main()
{
	int n = MAX;
	int *a = new int[n];
	
	srand(time(NULL));
	
	for (int i = 0; i < n; i++)
	{
		a[i] = (rand() - rand()) % 100;
	}
	
	cout << "Before deleting negative number: " << endl;
	xuat_mang(a, n);
	
	cout << "After deleting negative number: " << endl;
	xoa_so_am(a, n);
	xuat_mang(a, n);
	
	cout << "After sorting: " << endl;
	sap_xep(a, n);
	xuat_mang(a, n);
	
	cout << "Insert a number: " << endl;
	int x = 0;
	cin >> x;
	insert(a, n, x);
	cout << "After inserting: " << endl;
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

void sap_xep(int *a, const int &length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = length - 1; j > i; j--)
		{
			if (a[i] < a[j])
			{
				swap(a+i, a+j);
			}
		}
	}
}

void xuat_mang(int *a, const int &length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "n" << i << " = " << a[i] << ", ";
	}
	cout << endl;
}

void xoa_so_am(int *a, int &length)
{
	int left = 0, right = length - 1;
	while (left < right)
	{
		if (a[left] <= 0)
		{
			while (a[right] <= 0 && right > left)
			{
				right--;
			}
			
			if (right > left)
			{
				a[left] = a[right];
			}
			right--;
		}
		left++;
	}
	length = right;
}

void insert(int *a, int &length, int x)
{
	int i = 0;
	while (a[i] > x && i < length)
	{
		i++;
	}
	for (int j = length; j > i; j--)
	{
		a[j] = a[j-1];
	}
	a[i] = x;
	length++;
}
