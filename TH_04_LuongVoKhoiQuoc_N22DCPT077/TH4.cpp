#include <iostream>
using namespace std;

class SoNguyenDuong {
private:
    int giaTri;

public:
    void nhapGiaTri() {
        cout << "Nhap gia tri: ";
        cin >> giaTri;
    }

    void xuatGiaTri() {
        cout << "Gia tri: " << giaTri << endl;
    }

    int tinhGiaiThua() {
        int giaiThua = 1;
        for (int i = 1; i <= giaTri; ++i) {
            giaiThua *= i;
        }
        return giaiThua;
    }

    int layGiaTri() {
        return giaTri;
    }
};

int main() {
    int n;
    cout << "Nhap so luong so nguyen duong: ";
    cin >> n;

    SoNguyenDuong *dsSo = new SoNguyenDuong[n];

    for (int i = 0; i < n; ++i) {
        cout << "Nhap so nguyen duong thu " << i + 1 << ":" << endl;
        dsSo[i].nhapGiaTri();
    }

    int tongGiaiThua = 0;
    for (int i = 0; i < n; ++i) {
        int giaTri = dsSo[i].layGiaTri();
        int giaiThua = dsSo[i].tinhGiaiThua();
        cout << "Gia tri va giai thua cua so nguyen duong thu " << i + 1 << " la: " << giaTri << " va " << giaiThua << endl;
        tongGiaiThua += giaiThua;
    }

    cout << "Tong giai thua cua cac so nguyen duong la: " << tongGiaiThua << endl;

    delete[] dsSo;
    return 0;
}
