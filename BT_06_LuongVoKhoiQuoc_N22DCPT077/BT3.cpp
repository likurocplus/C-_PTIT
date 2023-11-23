#include <iostream>
#include <string>

using namespace std;

void proper(char a[]);

int main(){
	string str;
	getline(cin,str);
	int n=str.length();
	char a[n];
	for(int i=0;i<n;i++){
		a[i]=str[i];
	}	
	proper(a);
	cout<<a;
	
	return 0;
}

void proper(char a[]){
	if(a[0]>'a'&&a[0]<'z'){
			a[0]-=32;
		}
	for(int i=0;a[i]!='\0';i++){
		if(a[i-1]==' '&&a[i]>'a'&&a[i]<'z'){
			a[i]-=32;
		}
	}	
}

