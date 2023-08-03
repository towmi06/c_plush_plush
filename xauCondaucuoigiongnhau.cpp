#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    string s; cin >> s;
    map<char,int>mp;
    for(char x : s) mp[x]++;
    ll ans = s.size();// cac xau co 1 ki tu cx coi la xau dau cuoi =
    for(auto it : mp){
        int ts = it.second;
        ans += 1ll*ts*(ts-1)/2; // to hop chap 2
    }// so luong xau con thoa man 
    cout << ans ;
}