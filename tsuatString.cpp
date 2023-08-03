#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    map<string, int>mp;
    stringstream ss(s);
    string tmp;
    vector<string>ve;
    while(ss >> tmp){
        ve.push_back(tmp);
        mp[tmp]++;
    }
    for(auto i : mp) cout  <<i.first << ' '<< i.second << endl;
    cout << endl;
    for(auto x: ve){
        if(mp[x] != 0){
            cout << x << ' ' << mp[x]<<' ';
            mp[x] = 0;
        }
    }
}