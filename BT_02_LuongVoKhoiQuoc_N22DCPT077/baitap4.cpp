#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b;
	float x;
	cin>>a>>b;
	if(a!=0){
		x=-b/a;
		cout<<x;
	}
	else if (a==0){
		cout<<"Vo nghiem";
	}
	else cout<<0;
	return 0;
}
