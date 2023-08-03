#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    map<int,int>mp;
    int a[n];
    for(int i =0; i< n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    //to hop chap 2 cua n n(n-1)/2
    ll ans = 0; 
    for(auto it : mp){
        ans+= 1ll * it.second * (it.second - 1)/2;
    }
    cout << ans;
}