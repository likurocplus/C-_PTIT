#include <iostream>

using namespace std;

class HCN {
protected:
  int chieuDai;
  int chieuRong;

public:
  HCN() {
    chieuDai = 0;
    chieuRong = 0;
  }

  HCN(int chieuDai, int chieuRong) {
    this->chieuDai = chieuDai;
    this->chieuRong = chieuRong;
  }

  void nhap() {
    cout << "Nhap chieu dai: ";
    cin >> chieuDai;
    cout << "Nhap chieu rong: ";
    cin >> chieuRong;
  }

  void xuat() {
    cout << "Dientich = " << chieuDai * chieuRong << endl;
    cout << "Chuvi = " << 2 * (chieuDai + chieuRong) << endl;
  }

  int getChieuDai() {
    return chieuDai;
  }

  int getChieuRong() {
    return chieuRong;
  }
};

class HV : private HCN {
public:
  HV() : HCN() {}

  HV(int canh) : HCN(canh, canh) {}

  void xuat() {
    cout << "Dientich = " << getChieuDai() * getChieuDai() << endl;
    cout << "Chuvi = " << 4 * getChieuDai() << endl;
  }
};

int main() {
  int canh;
  cout << "Nhap canh hinh vuong: ";
  cin >> canh;

  HV hv(canh);
  hv.xuat();

  return 0;
}
