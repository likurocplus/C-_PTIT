#include <iostream>
#include <string>

using namespace std;

void upper(char a[]);

int main(){
	string str;
	cin>>str;
	int n=str.length();
	char a[n];
	for(int i=0;i<n;i++){
		a[i]=str[i];
	}	
	upper(a);
	cout<<a;
	
	return 0;
}

void upper(char a[]){
	for(int i=0;a[i]!='\0';i++){
		if(a[i]>'a'&&a[i]<'z'){
			a[i]-=32;
		}
		if(a[i]=='\0') break;
	}	
}

