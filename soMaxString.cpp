#include<bits/stdc++.h>
using namespace std;
using ll = long long;

string maxn(string a, string b){ 
    if(a.size()> b.size()) return a;
    if (a.size()< b.size()) return b;
    return max(a,b);
}
int main(){;
    string s; cin >> s;
    for(char &x: s){
        if(!isdigit(x)){
             x=' ';
        }
    }
    stringstream ss(s);
    vector<string> v; // luu lai cac so
    string tmp;
    while(ss >> tmp){
        // xoa so 0 o dau cac so co > 2 chu so
        while(tmp.size()>1 && tmp[0]=='0'){
            tmp.erase(0,1);// xoa 1 ktu tu vtri 0
        }
        v.push_back(tmp);
    }
    string  res ="0";
    for(string x : v){
        res = maxn(res,x);
    } 
    cout << res << endl;;
}