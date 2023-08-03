#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct Phso {
    ll tu, mau;
    void nhap(){
        cin >> tu >> mau;
    }
    void xuat(){
        ll mc = __gcd(tu,mau);
        tu /=mc;
        mau /= mc;
        if(mau < 0 && tu < 0){
            tu *= -1; mau *=-1;
        } else if( mau < 0){
            mau *= -1;
            tu *= -1;
        }
        cout << tu << '/' << mau;
    }
};
Phso tong(Phso a, Phso b){
    Phso tmp;
    tmp.tu = a.tu *b.mau + b.tu * a.mau;
    tmp.mau = a.mau * b.mau;
    return  tmp;
}

Phso hieu(Phso a, Phso b){
    Phso tmp;
    tmp.tu = a.tu * b.mau - b.tu * a.mau;
    tmp.mau = a.mau * b.mau;
    return tmp;
}
int main(){
    Phso a, b;
    a.nhap();b.nhap();
    a.xuat(); cout << endl;
    b.xuat();cout << endl;
    Phso sum = tong(a,b);
    sum.xuat(); cout << endl;
    Phso sub  = hieu(a,b);
    sub.xuat();
}