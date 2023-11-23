// Luong Vo Khoi Quoc
// N22DCPT077
// D22CQPT01-N

#include <iostream>
#include <string>

using namespace std;

int Input();
long tongLe(int n);


int main()
{
	int n = Input();	
	cout<<tongLe(n);
	return 0;
}

int Input()
{
	int n;
	while (true)
	{
		cin >> n;

		if (n > 0)
		{
			break;
		}
		else
		{
			cout << "n khong hop le. Xin moi nhap lai: " << endl;
		}
	}
	return n;
}

long tongLe(int n){
	int sum=0;
	if(n%2==0){
		int i=1;
		while(i<n){
			sum+=i;
			i=i+2;
		}
	}
	else if(n%2!=0){
		int i=1;
		while(i<=n){
			sum+=i;
			i=i+2;
		}
	}	
	return sum;
}
