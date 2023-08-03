#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){;
    string s; cin >> s;
    for(char &x: s){
        if(isalpha(x)){ // la chu cai
             x=' ';
        }
    }
    stringstream ss(s);
    ll ans =0;
    string tmp;
    while(ss >> tmp){
        ans += stoll(tmp);// chuyen chuoi thanh so
    } 
    cout << ans << endl;
}