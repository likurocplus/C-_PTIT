#include <iostream>
#include <string>

using namespace std;

void printwords(char a[]);

void countwords(char a[]);

int main(){
	cout<<"Vui long nhap chuoi ki tu: ";
	string str;
	getline(cin,str);
	int n=str.length();
	char a[n];
	for(int i=0;i<n;i++){
		a[i]=str[i];
	}	
	printwords(a); cout<<endl;
	countwords(a);
	return 0;
}

void countwords(char a[]){
	int counter=1;
	int tmp=0;
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==' '&&a[i+1]!=' '){
			counter+=1;	
		}
	}
	cout<<"So tu trong chuoi ki tu la: "<<counter;
}		

void printwords(char a[]){
	int j;
	int tmp=0;
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==' '&&a[i+1]!=' '){
			for(j=tmp;j<i;j++){
				cout<<a[j];
			}
			tmp=i+1;
			cout<<endl;
			j=tmp;
		}
		if (a[i] == '\0') break;
	}
	for(int i=tmp;a[i]!='\0';i++){
		cout<<a[i];
}
}

