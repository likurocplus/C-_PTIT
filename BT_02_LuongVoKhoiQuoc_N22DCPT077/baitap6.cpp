#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int sodien;
	cin>>sodien;
	float tiendien;
	if(sodien<=100){
		tiendien=2000*sodien;
	}
	else if(101<=sodien<=200){
		tiendien=2000*100+2500*(sodien-100);
	}
	else if(201<=sodien<=300){
			tiendien=2000*100+2500*100+3000*(sodien-200);
	}
	else if(sodien>300){
		      	tiendien=2000*100+2500*100+3000*100+5000*(sodien-300);
	}
	cout<<tiendien;
	return 0;
}
