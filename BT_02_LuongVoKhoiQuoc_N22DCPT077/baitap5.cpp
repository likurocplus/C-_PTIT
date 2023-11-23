#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c;
	float delta;
	float x,x1,x2;
	cin>>a>>b>>c;
	delta=pow(b,2)-4*a*c;
	if(delta>0){
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		cout<<x1<<" "<<x2;
	}
	else if (delta=0){
		cout<<-b/(2*a);
	}
	else cout<<"Phuong trinh vo nghiem";
	return 0;
}
