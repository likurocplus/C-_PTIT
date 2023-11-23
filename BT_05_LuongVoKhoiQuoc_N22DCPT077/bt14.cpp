//Luong Vo Khoi Quoc
//N22DCPT077
//D22CQPT01-N

#include <iostream>

using namespace std;

int Fibo(int n);
int SumFibo(int n);

int main(){
	int n=0; 
	do{
		cout<<"Hay nhap n: ";
		cin>>n;
		if(n<0) cout<<"n khong hop le!!! ";
	}while(n<0);
	
	cout<<"Phan tu thu "<<n<<" cua day Fibo la: "<<Fibo(n); cout<<endl;
	cout<<"Tong phan tu den "<<n<<" cua day la: "<<SumFibo(n);
}

int Fibo(int n){
	if(n==2) 
		return 1;
	if(n==1) 
		return 1; 
	else
	{
		return Fibo(n-1) + Fibo(n-2);
	}
}

int SumFibo(int n){
	if(n==2) 
		return 2;
	if(n==1) 
		return 1; 
	else
	{
		return SumFibo(n-1) + Fibo(n-1) + Fibo(n-2);
	}
}

