#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s,t;
    getline(cin, s);
    getline(cin,t);
    for(char &x : s) x = tolower(x);
    for(char &x : t) x = tolower(x);
    stringstream ss1(s), ss2(t);
    string a;
    set<string>se1,se2;
    map<string,int>mp;
    while(ss1 >> a){
        mp[a] = 1;
        se1.insert(a);
    }
    while(ss2 >> a){
        /*if(mp[a] == 1){
             mp[a]=2;
        }*/
        se2.insert(a);
    }
    for(auto it: se1){
        if(se2.count(it) != it.empty())
            cout << it<< ' ';
    }
    /*for(auto it :mp){
        if(it.second == 2) cout << it.first << ' ';
    }*/
}