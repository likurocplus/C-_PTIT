#include <iostream>
#include <string>
#include <math.h>
using namespace std;
float giaiPTBac1(float a, float b, float c) {
  if (a == 0) {
    if (b == 0) {
      return 0;
    } else {
      return -c / b;
    }
  } else {
    return -c / a;
  }
}
int main(){
	float a,b,c;
	cin>>a>>b>>c;
	cout<<giaiPTBac1(a,b,c);
	return 0;
}
