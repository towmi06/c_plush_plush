#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, d; cin >> n >> d;
    ll a[n];
    for( auto &x : a) cin >> x;
    ll ans = 0;
    for(int i = 1; i< n; i++){
        if(a[i] <= a[i-1]){
            ll bcmin =(a[i-1]-a[i])+1;
            int thaotac = (bcmin + d -1) /d;
            ans += thaotac;
            a[i]+= 1ll * thaotac * d;
        }
    } cout << ans;
}