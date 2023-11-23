#include <iostream>
#include <math.h>
using namespace std;
int main(){
	long int s4,s5,s6;
	int n;
	cin>>n;
	s5=s4=s6=0;
	int counter,counter1;
	counter=1;
	counter1=2;
	while(counter<=n){
		s4=s4+pow(counter,2);
		counter++;
	}
	while(counter<=n){
		s5=s5+pow(counter,2);
		counter=counter+2;
	}
	while(counter1<=n){
		s6=s6+pow(counter1,2);
		counter1=counter1+2;
	}
	cout<<s4<<endl;
	cout<<s5<<endl;
	cout<<s6<<endl;
	return 0;
}
