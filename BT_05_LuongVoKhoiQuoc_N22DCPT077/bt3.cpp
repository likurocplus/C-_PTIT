//Luong Vo Khoi Quoc
//N22DCPT077
//D22CQPT01-N

#include <iostream>

using namespace std;

void Input(int **, int &);
void Output(int **, int &);
int Det(int **, int n);

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

	Input(a, n);
	Output(a, n);
	cout << "Dinh thuc ma tran la: " << Det(a, n);

	for (int i = 0; i < n; i++)
	{
		delete [] a[i];
	}
	delete [] a;
	return 0;
}

void Input(int **a, int &n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void Output(int **a, int &n)
{
	cout << "Ma tran: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int Det(int **a, int n)
{
	if (n == 1)
	{
		return a[0][0];
	}
	else if (n == 2)
	{
		return a[0][0] * a[1][1] - a[0][1] * a[1][0];
	}
	else
	{
		int result = 0;
		for (int j = 0; j < n; j++)
		{
			int **m = new int*[n-1];
			for (int i = 0; i < n-1; i++)
			{
				m[i] = new int[n-1];
			}
			
			int mi = 0;
			int mj = 0;
			for (int row = 1; row < n; row++)
			{
				for (int col = 0; col < n; col++)
				{
					if (col == j) continue;
					m[mi][mj] = a[row][col];
					mj++;
				}
				mi++;
				mj = 0;
			}
			
			int sign = ((0 + j) % 2 == 0) ? 1 : -1;
			result += a[0][j] * sign * Det(m, n-1);
			
			for (int k = 0; k < n - 1; k++)
			{
				delete[] m[k];
			}
			delete[] m;
		}
		return result;
	}
}

