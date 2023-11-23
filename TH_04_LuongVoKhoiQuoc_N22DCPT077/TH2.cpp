#include <iostream>
#include<math.h>
using namespace std;

class PTBN {
protected:
  int b;
  int c;

public:
  PTBN() {
    b = 0;
    c = 0;
  }

  PTBN(int b, int c) {
    this->b = b;
    this->c = c;
  }

  int getB() {
    return b;
  }

  int getC() {
    return c;
  }

  void giai() {
    if (b == 0) {
      if (c == 0) {
        cout << "Phuong trinh vo nghiem" << endl;
      } else {
        cout << "Phuong trinh co 1 nghiem x=0" << endl;
      }
    } else {
      cout << "Phuong trinh co 1 nghiem x= " << -c / b << endl;
    }
  }
};

class PTBH : public PTBN {
protected:
  int a;

public:
  PTBH() : PTBN() {}

  PTBH(int a, int b, int c) : PTBN(b, c) {
    this->a = a;
  }

  void giai() {
    if (a == 0) {
      PTBN::giai();
    } else {
      double delta = b * b - 4 * a * c;
      if (delta < 0) {
        cout << "Phương trình vô nghiệm" << endl;
      } else if (delta == 0) {
        cout << "Phương trình có một nghiệm x = " << -b / (2 * a) << endl;
      } else {
        cout << "Phương trình có hai nghiệm x1 = " << (-b + sqrt(delta)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(delta)) / (2 * a) << endl;
      }
    }
  }
};

int main() {
  int a, b, c;
  cout << "Nhap he so a, b, c cua ptbh: ";
  cin >> a >> b >> c;

  PTBH ptbh(a, b, c);
  ptbh.giai();

  return 0;
}
