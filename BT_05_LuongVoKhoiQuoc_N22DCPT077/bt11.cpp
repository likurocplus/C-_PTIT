//Luong Vo Khoi Quoc
//N22DCPT077
//D22CQPT01-N

#include <iostream>

using namespace std;

int TichChanLe(int n);

int main(){
	int n=0; 
	do{
		cout<<"Hay nhap n: ";
		cin>>n;
		if(n<0) cout<<"n khong hop le!!! ";
	}while(n<0);
	cout<<"Tich tu 1 den n la: "<<TichChanLe(n);
}

int TichChanLe(int n){
	if(n==1) 
	
	return 1;
	
	if(n==2) 
	
	return 2;
	
	else
	{
	return n * TichChanLe(n-2);
	}
}

