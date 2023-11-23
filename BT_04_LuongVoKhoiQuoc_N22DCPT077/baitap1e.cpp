#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void hoanvi(int a[]){
	int tmp=a[0];
	a[0]=a[1];
	a[1]=tmp;
	cout<<" sau hoan vi "<<a[0]<<" "<<a[1];
}
int main(){
	int a[2];
	for(int i=0;i<=1;i++){
		cin>>a[i];
	}
	hoanvi(a);
	return 0;
}
