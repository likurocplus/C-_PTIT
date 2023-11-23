// Luong Vo Khoi Quoc
// N22DCPT077
// D22CQPT01-N

#include <iostream>
#include <string>

using namespace std;

int Input();
int Giaithua(int n);
float tongNDGT(int n);
int TongChan(int n);
int TongLe(int n);

int main(){
	int n= Input();
	cout<<tongNDGT(n)<<endl;
	cout<<TongChan(n)<<endl;
	cout<<TongLe(n)<<endl;
	return 0;
}

int Input(){
	int n;
	while (true){
		cin >> n;
		if (n > 0){
			break;
		}
		else{
			cout << "n khong hop le. Xin moi nhap lai: " << endl;
		}
	}
	return n;
}
int Giaithua(int n){
	int i=1;
	int giaithua=1;
	while(i<=n){
		giaithua*=i;
		i++;
	}
	return giaithua;
}
float tongNDGT(int n){
	int i=1;
	int tong=0;
	while(i<=n){
		tong+=1/Giaithua(i);
		i++;
	}
	return tong;
}
int TongChan(int n){
	int i=2;
	int tong=1;
	while(i<=n){
		tong*=i;
		i=i+2;
	}
	return tong;
}
int TongLe(int n){
	int i=1;
	int tong=1;
	for(int i=1;i<=n;i=i+2){
		tong*=i;
	}
	return tong;
}
