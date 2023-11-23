#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int S1(int n);
int S2(int n);
float S3(int n);
int P(int n);
int S4(int n);

int main(){
	int n;
	cin>>n;
	cout<<S1(n)<<endl;
	cout<<S2(n)<<endl;
	cout<<S3(n)<<endl;
	cout<<S4(n)<<endl;
	cout<<P(n)<<endl;
	return 0;
}

int S1(int n){
	int i=1;
	int sum=0;
	while(i<=n){
		sum+=i;
		i++;
	}
	return sum;
}
int S2(int n){
	int i=1;
	int sum=0;
	while(i<=n){
		sum+=pow(i,2);
		i++;
	}
	return sum;
}
float S3(int n){
	int i=1;
	int sum=0;
	while(i<=n){
		sum+=1/i;
		i++;
	}
	return sum;
}
int P(int n){
	int i=1;
	int multiple=1;
	while(i<=n){
		multiple*=i;
		i++;
	}
	return multiple;
}
int S4(int n){
	int i=1;
	int sum=0;
	while(i<=n){
		sum+=P(i);
		i++;
	}
	return sum;
}
