#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n; cin>>n;
	int even,odd;
	int counter=2,counter1=1;
	if(n%2==0){
	while(counter<=n){
		even=even*counter;
		counter=counter+2;
	}
		cout<<even;
	}
	else {
		while(counter1<=n){
		odd=odd*counter1;
		counter1=counter1+2;
		}
		cout<<odd;
	}
	
	return 0;
}
