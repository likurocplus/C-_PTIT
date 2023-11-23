#include <iostream>
using namespace std;

class TamGiac {
private:
    float canhDay;
    float chieuCao;

public:
    void nhapThongTin() {
        cout << "Nhap chieu dai canh day: ";
        cin >> canhDay;
        cout << "Nhap chieu cao: ";
        cin >> chieuCao;
    }

    void xuatThongTin() {
        cout << "Tam giac co canh day " << canhDay << " va chieu cao " << chieuCao << endl;
    }

    float tinhDienTich() {
        return (0.5 * canhDay * chieuCao);
    }

    float layDienTich() {
        return tinhDienTich();
    }
};

int main() {
    int n;
    cout << "Nhap so luong tam giac: ";
    cin >> n;

    TamGiac *dsTamGiac = new TamGiac[n];

    float maxDienTich = 0;
    int viTriMax = 0;

    for (int i = 0; i < n; ++i) {
        cout << "Nhap thong tin cho tam giac thu " << i + 1 << ":" << endl;
        dsTamGiac[i].nhapThongTin();
        float dienTich = dsTamGiac[i].layDienTich();
        if (dienTich > maxDienTich) {
            maxDienTich = dienTich;
            viTriMax = i;
        }
    }

    cout << "Tam giac co dien tich lon nhat la:" << endl;
    dsTamGiac[viTriMax].xuatThongTin();
    cout << "Dien tich: " << maxDienTich << endl;

    delete[] dsTamGiac;
    return 0;
}
