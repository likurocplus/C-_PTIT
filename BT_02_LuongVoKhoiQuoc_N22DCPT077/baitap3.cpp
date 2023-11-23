#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int x1,x2,x3,y1,y2,y3;
	float chuvi,dientich,p;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	cout<<"toa do trong tam cua tam giac: "<<"("<<(x1+x2+x3)/3<<";"<<(y1+y2+y3)/3<<")"<<endl;
	int a,b,c;
	a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	b=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	c=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	chuvi=a+b+c;
	p=chuvi/2;
	dientich=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<chuvi<<"   "<<dientich;
	return 0;
}
