#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void maxvalue(int a[]){
	int max=a[0];
	for(int i=0;i<=3;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<" max equal = "<<max;
}
int main(){
	int a[4];
	for(int i=0;i<=3;i++){
		cin>>a[i];
	}
	maxvalue(a);
	return 0;
}
