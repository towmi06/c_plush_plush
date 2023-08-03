#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct sophuc{
    ll thuc, ao;
    void nhap(){
        cin >> thuc >> ao;
    }
    void  xuat(){
        cout << thuc << ' '<< ao;
    }
};

sophuc tong(sophuc a, sophuc b){
    sophuc tmp;
    tmp.thuc = a.thuc + b.thuc;
    tmp.ao = a.ao + b.ao;
    return tmp;
}
sophuc hieu(sophuc a, sophuc b){
    sophuc tmp;
    tmp.thuc = a.thuc - b.thuc;
    tmp.ao = a.ao - b.ao;
    return tmp;
}
sophuc tich(sophuc a, sophuc b){
    sophuc tmp;
    tmp.thuc = a.thuc * b.thuc - a.ao * b.ao;
    tmp.ao = a.ao * b.thuc + b.ao* a.thuc;
    return tmp;
}
int main(){
    sophuc a, b;
    a.nhap(); b.nhap();
    sophuc sum = tong(a,b); sum.xuat();cout << endl;
    sophuc sub = hieu(a,b); sub.xuat();cout << endl;
    sophuc mul = tich(a,b); mul.xuat();
}