#include<bits/stdc++.h>
using namespace std;

class hsinh{

private:
    string ma_hs, ten;
    double diem[10];
    //string mon[10]={...} de luu thu tu neu muon ss hoac truy xuat tung mon

public:
    void nhap(int stt){
        string tmp = to_string(stt);// chuyen stt,.. thamh string
        if(tmp.size()== 1) tmp = "0"+tmp;// them so 0 o dau de du 2 so
        ma_hs = "HS"+tmp;
        cin.ignore();
        getline(cin,ten);
        for(int i = 0; i<10; i++){
            cin >> diem[i];
        }
        cin.ignore();
    }

    double getTB(){
        double tong = 0;
        for(int i = 0; i< 10; i++){
            tong += diem[i];
        }
        return tong/10;
    }

    void print(){
        double tb = getTB();
        cout << ma_hs << ' '<< ten << ' '<< fixed << setprecision(1)<< tb << ' ';
        if(tb >=9) cout << "XUAT SAC\n";
        else if(tb >=8) cout << "GIOI\n";
        else if(tb >= 7)cout << "KHA\n";
        else if(tb >= 5) cout << "TB\n";
        else cout << "YEU\n";
    }

    string getMahs(){
        return ma_hs;
    }
};

bool cmp(hsinh a, hsinh b){
    if(a.getTB() != b.getTB()) return a.getTB()> b.getTB();
    return a.getMahs()< b.getMahs();
}
int main(){
    int n; cin >> n;
    hsinh a[n];
    for(int i = 0; i< n; i++){
        a[i].nhap(i+1);
    }
    sort(a,a+n,cmp);
    for(hsinh x : a) x.print();

}