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
	cout<<"Vui long nhap phan tu k muon tim kiem: ";
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
void Xuat(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int timNhoNhat(int A[], int n){
	int min=A[0];
	for(int i=1;i<n;i++){
		if(A[i]<min){
			min=A[i];
		}
	}
	return min;
}
double trungbinh(int A[], int n){
	double sum=0;
	for(int i=0;i<n;i++){
		sum+=A[i];
	}
	return sum/n;
}
int timkiem(int A[], int n, int k){
	for (int i = 0; i < n; i++)
        if (A[i] == k)
            return i+1;
    return -1;
}

