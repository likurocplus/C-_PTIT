//Luong Vo Khoi Quoc
//N22DCPT077
//D22CQPT01-N


#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void Input_arr(int **arr, int m,int n);
void Output_arr(int **arr, int m,int n);
void TransposeMatrix(int **arr, int m,int n);


int main()
{
	int n; int m;
	do{
		cout << "Hay nhap n: ";
		cin >> n;
		cout<<"Hay nhap m: ";
		cin>>m;
		if( n < 0) cout<<"n khong hop le!!! ";
	}while ( n < 0 || m < 0);
	int **arr = new int*[n];
	for(int i=0;i<m;i++)
	{
		arr[i] = new int[m];
	}
	Input_arr(arr,m,n); 	cout<<endl;
	Output_arr(arr,m,n);	cout<<endl;
	TransposeMatrix(arr,m,n);
	for(int i=0;i<m;i++)
	{
		delete[] arr[i];
	}
	delete [] arr;
	return 0;
}
void Input_arr(int **arr, int m,int n)
{
	for(int i = 0; i < m ; i++)
	{
		for( int j = 0; j < n; j++)
		{
			cout<<"Hay nhap phan tu thu ["<<i<<";"<<j<<"] : ";
			cin>>arr[i][j];
			cout<<endl;
		}
	}
}
void Output_arr(int **arr, int m,int n)
{
	cout<<"Ma tran vua nhap la: ";
	for(int i = 0; i < m ; i++)
	{
		cout<<endl;
		for( int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
	}
}

void TransposeMatrix(int **arr, int m,int n)
{
	int **A = new int*[m];
	for(int i=0;i<n;i++)
	{
		A[i] = new int[n];
	}
	cout<<"Ma tran chuyen vi la: "<< endl;
	for(int i = 0; i < m ; i++)
	{
		for( int j = 0; j < n; j++)
		{
			A[j][i]=arr[i][j];
			
		}
	}
	for(int i = 0; i < n ; i++)
	{
		cout<<endl;
		for( int j = 0; j < m; j++)
		{
			cout << A[i][j] << " ";
		}
	}
	for(int i=0;i<n;i++)
	{
		delete[] A[i];
	}
	delete [] A;
}

