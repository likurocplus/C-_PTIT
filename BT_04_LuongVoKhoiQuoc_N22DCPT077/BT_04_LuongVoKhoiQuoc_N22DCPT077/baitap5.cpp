#include <iostream>
#include <math.h>
using namespace std;

int Fibonacci(int n);
int Fibo(int n);

int main(){
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
	cout<<Fibonacci(i)<<" ";
	}
	return 0;
}

int Fibonacci(int n){
	if(n<0){return -1;}
	else if(n==0||n==1){return n;}
	else return Fibonacci(n-1)+Fibonacci(n-2);
}
int Fibo(int n){
	int f0=0;
	int f1=1;
	int fn=1;
		if(n<0){return -1;}
	else if(n==0||n==1){return n;}
	else for(int i=2;i<=n;i++){	
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	return fn;
}
