// Luong Vo Khoi Quoc
// N22DCPT077
// D22CQPT01-N

#include <iostream>
#include <string>
using namespace std;

int ucln(int x,int y);

int main()
{
	int a,b;
	while(true){
		cin>>a>>b;
		if(a>0&&b>0){
			break;
		}
		else cout<<"so khong hop le, vui long nhap lai so lon hon 0";
		}
	cout<<"phan so rut gon la: "<<a/ucln(a,b)<<"/"<<b/ucln(a,b)<<endl;
	int x,y;
	cin>>x>>y;
	cout<<ucln(x,y);
	return 0;
}

int ucln(int x,int y){
	if(x>y){
		int pdu=x%y;
		int trunggian;
		int sochia=y;
		while(pdu!=0){
			trunggian=pdu;
			pdu=sochia%trunggian;
			sochia=trunggian;
		}
		return sochia;
	}
	else if(y>x){
		int pdu=y%x;
		int trunggian;
		int sochia=x;
		while(pdu!=0){
			trunggian=pdu;
			pdu=sochia%trunggian;
			sochia=trunggian;
		}
		return sochia;
	}
	else if(x=y){return x;}
}

