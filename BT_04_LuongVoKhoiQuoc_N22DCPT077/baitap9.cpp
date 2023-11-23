#include <iostream>
#include <math.h>
using namespace std;

void Nhap(int a[],int n);
void Xuat(int a[],int n);

int main(){
	int A[1000];
	int N;
	cin>>N;
	Nhap(A,N);
	Xuat(A,N);
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
