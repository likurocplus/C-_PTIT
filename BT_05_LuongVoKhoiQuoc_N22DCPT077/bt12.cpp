//Luong Vo Khoi Quoc
//N22DCPT077
//D22CQPT01-N

#include <iostream>

using namespace std;

int PhanTu(int n, int a, int d);

int main(){
	cout<<"Hay nhao a0: "; int a; cin>>a; 
	cout<<"Hay nhap cong sai d: "; int d; cin>>d;
	int n=0; 
	do{
		cout<<"Hay nhap n: ";
		cin>>n;
		if(n<0) cout<<"n khong hop le!!! ";
	}while(n<0);
	
	cout<<"Phan tu thu "<<n<<" la: "<<PhanTu(n,a,d);
}

int PhanTu(int n, int a, int d){
	if(n==0) 
		return a;
	else
	{
		return d + PhanTu(n-1,a,d);
	}
}

