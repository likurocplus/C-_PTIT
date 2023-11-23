
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void swap(int *, int *);
void xuat_mang(int *, const int &);
void sap_xep(int *, const int &);
int Binary_Search(int *, const int &, int x);

int main()
{
    int n = 0;
    while (n <= 0)
    {
        cout << "Nhap n: ";
        cin >> n;
    }

    int *a = new int[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    cout << "Mang sau khi sap xep: " << endl;
    sap_xep(a, n);
    xuat_mang(a, n);

    cout << "Nhap gia tri can tim: ";
    int x;
    cin >> x;
    int result = Binary_Search(a, n, x);

    if (result >= 0)
    {
        cout << "Found at index " << result;
    }
    else
    {
        cout << "Failed to find " << x;
    }

    delete[] a;
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void xuat_mang(int *a, const int &length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
}

void sap_xep(int *a, const int &length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int Binary_Search(int *a, const int &n, int x)
{
    int left, right, mid;
    left = 0;
    right = n - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

