#include <iostream>
#include <math.h>
using namespace std;
int main(){
	long long luong;
	float heso;
	int tnct;
	cin>>tnct;
	if(tnct<12){heso=1.92;}
	else if(12<=tnct&&tnct<36){heso=2.34;}
	else if(36<=tnct&&tnct<60){heso=3;}
	else heso=4;
	cout<<heso<<endl;
	luong=650000*heso;
	cout<<luong;
	return 0;
}
