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
float giaiPTBac2(float a, float b, float c) {
  float delta = b * b - 4 * a * c;
  if (delta < 0) {
    return 0;
  } else if (delta == 0) {
    return -b / 2 * a;
  } else {
    return (-b + sqrt(delta)) / 2 * a;
  }
}
void maxvalue(int a[]){
	int max=a[0];
	for(int i=0;i<=3;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<" max equal = "<<max;
}
void hoanvi(int a[]){
	int tmp=a[0];
	a[0]=a[1]
	a[1]=tmp;
	cout<<" sau hoan vi "<<a[0]<<" "<<a[1];
}
void sort4songuyen(int a[]) {
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 4; j++) {
      if (a[i] > a[j]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main(){
	


	
	return 0;
}
