#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class SinhVien
{
private:
    string maSV = "B20DCCN001";
    string hoTen = "";
    string lop = "";
    string ngaySinh = "";
    float diemGPA = 0;
public:
    SinhVien() {}
    friend istream& operator>>(istream& is, SinhVien& sv);
    friend ostream& operator<<(ostream& os, const SinhVien& sv);
};

istream& operator>>(istream& is, SinhVien& sv)
{
    getline(is, sv.hoTen);
    getline(is, sv.lop);
    is >> sv.ngaySinh;
    if(sv.ngaySinh[1]=='/') sv.ngaySinh="0"+sv.ngaySinh;
    if(sv.ngaySinh[4]=='/') sv.ngaySinh.insert(sv.ngaySinh.begin()+3,'0');
    is >> sv.diemGPA;
    return is;
}

ostream& operator<<(ostream& os, const SinhVien& sv)
{
    os << sv.maSV << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " ";
    os << fixed << setprecision(2) << sv.diemGPA;
    return os;
}

int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
