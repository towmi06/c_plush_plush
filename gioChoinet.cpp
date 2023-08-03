#include<bits/stdc++.h>
using namespace std;

class account{
private:
    string username, password,ten,vao,ra;
public:
    void nhap(){
        getline(cin,username);
        getline(cin,password);
        getline(cin, ten);
        getline(cin,vao);
        getline(cin,ra);
    }
    int getGioChoi(){
        // tach hour va minute
        int H_in = stoi(vao.substr(0,2));// tach ra 2 so dau tien 
        int M_in = stoi(vao.substr(3,2));// tach tu so t3 va lay 2 so cuoi
        int H_out = stoi(ra.substr(0,2));
        int M_out = stoi(ra.substr(3,2));
        int r = H_out * 60 + M_out;
        int v = H_in *60 + M_in;
        return r-v; // ra so gio choi 
    }
    
    void print (){
        int minute = getGioChoi();
        cout << username << ' '<< password << ' '<< ten << ' '<< minute /60 << "gio"<< ' '<< minute %60 << "phut" << endl;
    }
// lay username de sxep
    string getUsername(){
        return username;
    }
};
// thoi gian choi giam da, neu =nhau thi in username theo tt tang dan
bool cmp( account a, account b){
    if(a.getGioChoi() != b.getGioChoi()){
        return a.getGioChoi()> b.getGioChoi();
    }
    return a.getUsername() < b.getUsername();
}

int main(){
    int n; cin >> n;
    account a[n];
    cin.ignore();
    for(int i = 0; i< n; i++){
        a[i].nhap();
    }
    sort(a, a+n, cmp);
    for(account x : a) {
        x.print();
    }
}