#include <iostream>
#include <string>

using namespace std;

class NhanVien {
    private:
        string maNhanVien;
        string hoTen;
        string gioiTinh;
        string ngaySinh;
        string diaChi;
        string maSoThue;
        string ngayKyHopDong;

    public:
        NhanVien() {
            maNhanVien = "00001";
            hoTen = "";
            gioiTinh = "";
            ngaySinh = "";
            diaChi = "";
            maSoThue = "";
            ngayKyHopDong = "";
        }

        friend istream& operator>>(istream& is, NhanVien& nv) {
            getline(is, nv.hoTen);
            getline(is, nv.gioiTinh);
            getline(is, nv.ngaySinh);
            getline(is, nv.diaChi);
            getline(is, nv.maSoThue);
            getline(is, nv.ngayKyHopDong);
            return is;
        }

        friend ostream& operator<<(ostream& os, const NhanVien& nv) {
            os << nv.maNhanVien << " " << nv.hoTen << " " << nv.gioiTinh << " "
                << nv.ngaySinh << " " << nv.diaChi << " " << nv.maSoThue << " "
                << nv.ngayKyHopDong;
            return os;
        }

        void printInfo() {
            cout << "Ma nhan vien: " << maNhanVien << endl;
            cout << "Ho ten: " << hoTen << endl;
            cout << "Gioi tinh: " << gioiTinh << endl;
            cout << "Ngay sinh: " << ngaySinh << endl;
            cout << "Dia chi: " << diaChi << endl;
            cout << "Ma so thue: " << maSoThue << endl;
            cout << "Ngay ky hop dong: " << ngayKyHopDong << endl;
        }
};

int main() {
    NhanVien a;
    cin >> a;
    cout << a ;
    return 0;
}
