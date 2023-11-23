#include <iostream>
#include <math.h>
using namespace std;

void Nhap(int a[],int n);
bool MangDoiXung(int a[],int n);

int main(){
	int A[1000];
	int N;
	cin>>N;
	Nhap(A,N);
	if(MangDoiXung(A,N)){
		cout<<"Mang nay la mang doi xung";
	}
	else cout<<"Mang nay khong phai la mang doi xung";
	return 0;
}

void Nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
bool MangDoiXung(int a[],int n){
	for(int i=0;i<n/2;i++){
			if(a[i]!=a[n-i-1]){
				return false;
			}
		}
	return true;
}
	


