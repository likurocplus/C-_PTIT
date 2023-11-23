//Luong Vo Khoi Quoc
//N22DCPT077
//D22CQPT01-N


#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void Input_arr(string label, int **arr, int m,int n);
void Output_arr(string label,int **arr, int m,int n);
void SumMatrix(int **arr1,int **arr2, int m,int n);


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
	Input_arr("Hay nhap ma tran 1: ",arr,m,n); 	cout<<endl;

	int **arr1 = new int*[n];
	for(int i=0;i<m;i++)
	{
		arr1[i] = new int[m];
	}
	Input_arr("Hay nhap ma tran 2: ",arr1,m,n); 	cout<<endl;
	

	Output_arr("Ma tran thu 1 la: ",arr,m,n);	cout<<endl;
	Output_arr("Ma tran thu 2 la: ",arr1,m,n);	cout<<endl;
	
	SumMatrix(arr,arr1,m,n);
	
	for(int i=0;i<m;i++)
	{
		delete[] arr[i];
	}
	delete [] arr;
	
	for(int i=0;i<m;i++)
	{
		delete[] arr1[i];
	}
	delete [] arr1;
	
	return 0;
}
void Input_arr(string label, int **arr, int m,int n)
{
	cout<<label<<endl;
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
void Output_arr(string label, int **arr, int m,int n)
{
	cout<<label<<endl;
	for(int i = 0; i < m ; i++)
	{
		cout<<endl;
		for( int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
	}
}

void SumMatrix(int **arr1,int **arr2, int m,int n)
{
	int **A = new int*[n];
	for(int i=0;i<m;i++)
	{
		A[i] = new int[m];
	}
	cout<<"Tong cua 2 ma tran la: "<< endl;
	for(int i = 0; i < m ; i++)
	{
		for( int j = 0; j < n; j++)
		{
			A[i][j]=arr1[i][j]+arr2[i][j];
			
		}
	}
	for(int i = 0; i < m ; i++)
	{
		cout<<endl;
		for( int j = 0; j < n; j++)
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

