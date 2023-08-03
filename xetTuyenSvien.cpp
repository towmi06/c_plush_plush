#include<bits/stdc++.h>
using namespace std;

struct svien{
    string ten, ns, dc;
    int toan, li, hoa;
    void nhap(){
        getline(cin, ten);
        getline(cin, ns);
        getline(cin, dc);
        cin >> toan >> li >> hoa;
    }
    int sum(){
        return toan + li + hoa;
    }
    void xuat(){
        cout << ten <<' '<< ns << ' '<< dc <<' ';
        cout << sum()<< ' ';
    }
    void xuat2(){
        cout << ten <<' '<< ns << ' '<< dc <<' ';
        cout << sum() << ' ';
        if(sum() >=24) cout << "DO";
        else cout << "TRUOT";
    }
};

int main(){
    int n; cin >> n;
    svien a[n];
    vector<int> v; // luu chi so thu khoa
    int maxn = 0;
    for(int i = 0; i < n; i++){
        cin.ignore();
        a[i].nhap();
        if( a[i].sum() > maxn ) maxn = a[i].sum();
    }
    for(int i = 0; i< n; i++){
        if(a[i].sum() == maxn){
            v.push_back(i);
        }
    }
    cout << "DANH SACH THU KHOA: "<< endl;
    for(auto x : v){
        a[x].xuat();
        cout << endl;
    }
    cout <<"KET QUA XET TUYEN: " << endl;
    for(int i = 0; i< n; i++){
        a[i].xuat2();
        cout << endl;
    }
}