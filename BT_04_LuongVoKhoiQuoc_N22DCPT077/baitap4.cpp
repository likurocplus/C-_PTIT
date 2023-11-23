// Luong Vo Khoi Quoc
// N22DCPT077
// D22CQPT01-N

#include <iostream>
#include <string>


int UCLN(int x,int y);
using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	cout<<UCLN(x,y);
	return 0;
}

int UCLN(int x,int y){
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

