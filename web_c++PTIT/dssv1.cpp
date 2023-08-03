#include <bits/stdc++.h>

using namespace std;

struct SinhVien {
    string maSV;
    string hoTen;
    string lop;
    string ngaySinh;
    float diemGPA;
};

void nhap(SinhVien ds[], int N) {
    string ma = "B20DCCN";
    int count = 1;

    for (int i = 0; i < N; i++) {
        ds[i].maSV = ma + to_string(count++);
        cin.ignore(); 
        getline(cin, ds[i].hoTen);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ngaySinh);
        cin >> ds[i].diemGPA;
    }
}

void in(SinhVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        cout << ds[i].maSV << " ";
        cout << ds[i].hoTen << " ";
        cout << ds[i].lop << " ";
        cout << ds[i].ngaySinh << " ";
        cout << fixed << setprecision(2) << ds[i].diemGPA << endl;
    }
}

int main() {
    SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
