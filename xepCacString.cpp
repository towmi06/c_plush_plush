#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    set<string>sv;
    vector<string> vr;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        vr.push_back(tmp);
        sv.insert(tmp);
    }
    for(string c : sv) cout << c << ' ';
    cout << endl;
    for(auto i : vr) {
        if(sv.count(i) ==1){
            cout << i << ' ';
            sv.erase(i);
        }
        // cout << v[1][2] la string t1 va t2
    }
}