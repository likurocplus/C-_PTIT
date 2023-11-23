#include <iostream>
#include <string>

using namespace std;

void standard(char a[]);

int main(){
	string str;
	getline(cin,str);
	int n=str.length();
	char a[n];
	for(int i=0;i<n;i++){
		a[i]=str[i];
	}	
	standard(a);
	cout<<a;
	
	return 0;
}

void standard(char a[]){
	if(a[0]==' '&&a[1]!=' '){
			a[0]=a[1];
		}
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==' '&&a[i+1]!=' '){
			a[i]=a[i+1];
				for(int j=i+1;a[j]!='\0';j++){
					a[j]=a[j+1];
				}
		}
	}	
}

