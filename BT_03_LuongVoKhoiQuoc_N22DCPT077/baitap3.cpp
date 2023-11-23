#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int giaithua=1;
	int counter=1;
	if(n==0){
		cout<<1;
		}
	else {
		while(counter<= n){
			giaithua=counter*giaithua;
			counter++;
		}
	}
	cout<<giaithua<<endl;
	return 0;
}
