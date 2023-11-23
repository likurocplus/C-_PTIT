#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	double forr,whilee,dowhile=0;
	for(int i=1;i<=n;i++){
		forr=forr+(1/i);
	}
	int counter=1;
	while(counter<=n){
		whilee=whilee+(1/counter);
		counter++;
	}
	do {dowhile=dowhile+(1/counter);
		counter++;
		}while(counter<=n);
		
	cout<<forr<<endl;
	cout<<whilee<<endl;
	cout<<dowhile<<endl;
	return 0;
}
