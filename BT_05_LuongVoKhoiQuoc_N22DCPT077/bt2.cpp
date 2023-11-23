//Luong Vo Khoi Quoc
//N22DCPT077
//D22CQPT01-N


#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void Input_arr(int **arr, int m,int n);
void Output_arr(int **arr, int m,int n);
void TongHang(int **arr, int m,int n);
void TongCot(int **arr, int m,int n);

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
	TongHang(arr,m,n);		cout<<endl;
	TongCot(arr,m,n);
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
void TongHang(int **arr, int m,int n)
{
	for(int i = 0; i < m ; i++)
	{
		int sum=0;
		for( int j = 0; j < n; j++)
		{
			sum+=arr[i][j];
		}
		cout<<"Tong hang "<<i<<" bang: "<<sum<<endl;
	}
}
void TongCot(int **arr, int m,int n)
{
	for(int j = 0; j < n; j++)
	{
		int sum=0;
		for( int i = 0; i < m ; i++)
		{
			sum+=arr[i][j];
		}
		cout<<"Tong cot "<<j<<" bang: "<<sum<<endl;
	}
}
