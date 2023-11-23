//Luong Vo Khoi Quoc
//N22DCPT077
//D22CQPT01-N

#include <iostream>

using namespace std;

int PhanTu(int n, int a, int p);

int main(){
	cout<<"Hay nhao a0: "; int a; cin>>a; 
	cout<<"Hay nhap cong boi: "; int p; cin>>p;
	int n=0; 
	do{
		cout<<"Hay nhap n: ";
		cin>>n;
		if(n<0) cout<<"n khong hop le!!! ";
	}while(n<0);
	
	cout<<"Phan tu thu "<<n<<" la: "<<PhanTu(n,a,p);
}

int PhanTu(int n, int a, int p){
	if(n==0) 
		return a;
	else
	{
		return p * PhanTu(n-1,a,p);
	}
}

