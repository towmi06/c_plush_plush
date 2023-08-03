#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s;
    getline(cin , s);
    map<char,int>mp;
    for(char x : s){
        mp[x]++;
    }
    // thu tu tu dien tang dan 
    for(auto it : mp)
        cout << it.first<< ' '<< it.second<< endl;
    cout << endl;
    // theo thu tu xh
    for(char c : s){
        if(mp[c] != 0){
            cout << c << ' '<< mp[c]<< endl;
            mp[c] = 0;
        }
    } 
}