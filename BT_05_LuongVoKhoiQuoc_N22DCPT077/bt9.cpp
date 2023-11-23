//Luong Vo Khoi Quoc
//N22DCPT077
//D22CQPT01-N

#include <iostream>

using namespace std;

int Tong(int n);

int main(){
	int n=0; 
	do{
		cout<<"Hay nhap n: ";
		cin>>n;
		if(n<0) cout<<"n khong hop le!!! ";
	}while(n<0);
	cout<<"Tong tu 1 den n la: "<<Tong(n);
}

int Tong(int n){
	if(n==1) 
	return 1;
	
	if(n==2) 
	return 2;
	
	else
	{
	return n + Tong(n-2);
	}
}

