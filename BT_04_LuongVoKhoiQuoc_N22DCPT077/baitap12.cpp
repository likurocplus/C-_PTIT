#include <iostream>
#include <math.h>
using namespace std;

void Nhap(int a[],int n);
void Xuat(int a[],int n);
int timkiem(int A[], int N, int k);

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
	for(int i=0;i<n;i++){
		if(a[i]<10||a[i]>100){
		cout<<"Phan tu khong hop le vui long nhap lai! ";
		return Nhap(a,n);
	}
	}
}
int timkiem(int A[], int n, int k){
	for (int i = 0; i < n; i++)
        if (A[i] == k)
            return i+1;
    return -1;
} 

void Xuat(int a[],int n){
	for(int i=0;i<n;i++){
		
		cout<<a[i]<<" ";
	}
}


