#include <iostream>
#include <math.h>
using namespace std;

void Nhap(int a[],int n);
void Xuat(int a[],int n);
void xuatVTchan(int A[ ], int n);
void xuatchan(int A[], int n);
void thanhle(int A[], int n);

int main(){
	int A[1000];
	int N;
	cin>>N;
	Nhap(A,N);
	Xuat(A,N);
	cout<<"Cac vi tri có value chan la: ";
	xuatVTchan(A,N);
	cout<<endl;
	cout<<"Cac so le trong mang la: ";
	xuatchan(A,N);
	cout<<endl;
	cout<<"Sau khi bien doi mang thanh all le la: ";
	thanhle(A,N);
	return 0;
}

void Nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void Xuat(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void xuatVTchan(int A[], int n){
	for(int i=0;i<n;i++){
		if(A[i]%2==0){
		cout<<i+1<<" ";}
	}
}
void xuatchan(int A[], int n){
	for(int i=0;i<n;i++){
		if(A[i]%2==0){
		cout<<A[i]<<" ";}
	}
}
void thanhle(int A[], int n){
	for(int i=0;i<n;i++){
		if(A[i]%2==0){
			A[i]+=1;
		}
		cout<<A[i]<<" ";
	}
}
