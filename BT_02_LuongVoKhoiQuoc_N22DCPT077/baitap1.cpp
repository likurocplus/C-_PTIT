#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a,b,c;
	cin>>a>>b>>c;
	float chuvi,dientich,p;
	if(a+b>c&&a+c>b&&b+c>a){
		chuvi=a+b+c;
		p=chuvi/2;
		dientich=sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<chuvi<<"   "<<dientich;
	}
	else cout<<"khong phai tam giac";
	return 0;
}
