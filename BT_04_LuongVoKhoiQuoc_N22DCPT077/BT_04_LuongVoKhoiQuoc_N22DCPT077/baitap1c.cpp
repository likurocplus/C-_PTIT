#include <iostream>
#include <string>
#include <math.h>
using namespace std;
struct Nghiem {
    int n1, n2;
};
float giaiPTBac2(float a, float b, float c) {
  float delta = b * b - 4 * a * c;
  if (delta < 0) {
    return 0;
  } else if (delta == 0) {
    return -b / 2 * a;
  } else {
  	float value = (-b + sqrt(delta)) / 2 * a;
    return value;
  }
}
int main(){
	float a,b,c;
	cin>>a>>b>>c;
	cout<<giaiPTBac2(a,b,c);
	return 0;
}
