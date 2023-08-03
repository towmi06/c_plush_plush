#include <bits/stdc++.h>
using namespace std;

class SinhVien {
private:
    string maSV = "B20DCCN001";
    string hoTen = "";
    string lop = "";
    string ngaySinh = "";
    float diemGPA = 0;

public:
    void nhap();
    void xuat();
};

void SinhVien::nhap() {
    getline(cin, hoTen);
    getline(cin, lop);
    cin >> ngaySinh;
    if (ngaySinh[1] == '/') ngaySinh = "0" + ngaySinh;
    if (ngaySinh[4] == '/') ngaySinh.insert(ngaySinh.begin() + 3, '0');
    cin >> diemGPA;
    cin.ignore();
}

void SinhVien::xuat() {
    cout << maSV << " " << hoTen << " " << lop << " " << ngaySinh << " ";
    cout << fixed << setprecision(2) << diemGPA << endl;
}

int main() {
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
