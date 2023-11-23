#include <iostream>

using namespace std;

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

int main() {
  int a[4];
  for (int i = 0; i < 4; i++) {
    cin >> a[i];
  }

  sort4songuyen(a);
  for (int i = 0; i < 4; i++) {
    cout << a[i] << " ";
  }

  return 0;
}

