#include <iostream>
#include <string>

using namespace std;

void lower(char a[]);

int main(){
	string str;
	getline(cin,str);
	int n=str.length();
	char a[n];
	for(int i=0;i<n;i++){
		a[i]=str[i];
	}	
	lower(a);
	cout<<a;
	
	return 0;
}

void lower(char a[]){
	for(int i=0;a[i]!='\0';i++){
		if(a[i]>'A'&&a[i]<'Z'){
			a[i]+=32;
		}
	}	
}

