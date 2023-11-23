#include <iostream>
#include <cmath>
using namespace std;

class Diem {
private:
    float x, y;

public:
    void nhap() {
        cout << "Nhap toa do x: ";
        cin >> x;
        cout << "Nhap toa do y: ";
        cin >> y;
    }

    void xuat() {
        cout << "(" << x << ", " << y << ")";
    };

    // Thêm các phương thức lấy giá trị x, y nếu cần thiết
    float layX() {
        return x;
    }

    float layY() {
        return y;
    }
};

class DoanThang : public Diem {
private:
    float a, b;

public:
    DoanThang(float x1, float y1, float x2, float y2) {
        Diem::nhap();
        a = x2;
        b = y2;
    }

    void nhap() {
        cout << "Nhap toa do diem dau cua doan thang:" << endl;
        Diem::nhap();
        cout << "Nhap toa do diem cuoi cua doan thang:" << endl;
        cout << "Nhap toa do x: ";
        cin >> a;
        cout << "Nhap toa do y: ";
        cin >> b;
    }

    void xuat() {
        cout << "Doan thang co toa do: ";
        Diem::xuat();
        cout << " den ";
        cout << "(" << a << ", " << b << ")" << endl;
    }

    float chieuDai() {
        float x1 = Diem::layX();
        float y1 = Diem::layY();
        return sqrt(pow(a - x1, 2) + pow(b - y1, 2));
    }

    bool laSongSong(DoanThang dt) {
        float x1 = Diem::layX();
        float y1 = Diem::layY();
        return ((a - x1) * (dt.b - y1)) == ((b - y1) * (dt.a - x1));
    }
};

int main() {
    DoanThang dt1(0, 0, 0, 0);
    DoanThang dt2(0, 0, 0, 0);

    cout << "Nhap toa do cho Doan thang 1:" << endl;
    dt1.nhap();
    cout << "Nhap toa do cho Doan thang 2:" << endl;
    dt2.nhap();

    dt1.xuat();
    dt2.xuat();

    if (dt1.laSongSong(dt2)) {
        cout << "Hai doan thang la song song." << endl;
    } else {
        cout << "Hai doan thang khong song song." << endl;
    }

    return 0;
}
