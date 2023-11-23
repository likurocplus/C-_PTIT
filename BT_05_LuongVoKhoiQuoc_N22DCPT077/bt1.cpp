//Luong Vo Khoi Quoc
//N22DCPT077
//D22CQPT01-N

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void Input_arr(int **arr, int size);
void Output_arr(int **arr, int size);
void Duong_cheo_chinh(int **arr, int size);
void Duong_cheo_phu(int **arr, int size);

int main()
{
	int n; 
	do{
		cout<<"Hay nhap n: ";
		cin>>n;
		if(n<0) cout<<"n khong hop le!!! ";
	}while(n<0);
	int **arr = new int*[n];
	for(int i = 0; i<n; i++)
	{
   		arr[i] = new int[n];
   	}
	Input_arr(arr,n);
	cout << "Ma tran vua nhap la: "<<endl;
	Output_arr(arr,n); cout<< endl;
	Duong_cheo_chinh(arr,n); cout << endl;
	Duong_cheo_phu(arr,n); 
	for(int i = 0; i<n; i++) delete []arr[i];
	delete []arr;
	
	return 0;
}

int Input_integer(string label, int n)
{
	do{
		cout<<label;
		cin>>n;
		if(n<0) cout<<"n khong hop le!!! ";
		return n;
	}while(n<0);
}
void Input_arr(int **arr, int size)
{
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout<<"Hay nhap phan tu thu ["<<i<<";"<<j<<"] : ";
			cin>>arr[i][j];
			cout<<endl;
		}
	}	
}
void Output_arr(int **arr, int size)
{
	for(int i=0;i<size;i++){
			cout<<endl;	
		for(int j=0;j<size;j++){
			cout<<arr[i][j]<<" ";
		}
	}
}
void Duong_cheo_chinh(int **arr, int size)
{
	cout<<"Duong Cheo Chinh: ";
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(i==j)
				cout<<arr[i][j]<<" ";
		}
	}
}
void Duong_cheo_phu(int **arr, int size)
{
	cout<<"Duong Cheo Phu: ";
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(i+j==size-1)
				cout<<arr[i][j]<<" ";
		}
	}
}
