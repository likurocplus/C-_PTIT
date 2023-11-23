#include <iostream>
#include <math.h>
using namespace std;
int main(){
	long int s1,s2,s3;
	int n;
	cin>>n;
	s1=s2=s3=0;
	for(int i=1;i<=n;i++){
		s1=s1+i;
	}
	for(int i=2;i<=n;i=i+2){
		s3=s3+i;
	}
	for(int i=1;i<=n;i=i+2){
		s2=s2+i;
	}
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	return 0;
}
