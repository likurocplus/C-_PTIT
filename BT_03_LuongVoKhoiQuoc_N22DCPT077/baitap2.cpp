#include <iostream>
#include <math.h>
using namespace std;
int main(){
	long int s4,s5,s6;
	int n;
	cin>>n;
	s5=s4=s6=0;
	for(int i=1;i<=n;i++){
		s4=s4+pow(i,2);
	}
	for(int i=2;i<=n;i=i+2){
		s5=s5+pow(i,2);
	}
	for(int i=1;i<=n;i=i+2){
		s6=s6+pow(i,2);
	}
	cout<<s4<<endl;
	cout<<s5<<endl;
	cout<<s6<<endl;
	return 0;
}
