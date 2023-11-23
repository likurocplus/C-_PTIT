#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string upcase(string a); 

int main(){
	string b;
	cin>>b;
	cout<<upcase(b);
	return 0;
}
string upcase(string a){
	for(int i=0;i<a.size();i++){
		if(a[i]>='A'&&a[i]<='Z'){
			a[i]+=32;
		}
	}
	return a;
}
