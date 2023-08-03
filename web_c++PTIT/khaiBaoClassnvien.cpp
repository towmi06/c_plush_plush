#include <iostream>
#include <string>

using namespace std;

class NhanVien {
    private:
        string hoTen;
        string gioiTinh;
        string ngaySinh;
        string diaChi;
        string maSoThue;
        string ngayKyHopDong;

    public:
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
            os << "00001" << " " << nv.hoTen << " " << nv.gioiTinh << " "
                << nv.ngaySinh << " " << nv.diaChi << " " << nv.maSoThue << " "
                << nv.ngayKyHopDong;
            return os;
        }

};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}