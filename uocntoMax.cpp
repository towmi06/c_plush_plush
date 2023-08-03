#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1000000007;

ll solve (ll n){
    ll kq = 0 ;
    for(ll i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            kq = max(kq, i);
            while(n% i ==0){
                n/= i;
            }
        }
    }
    if(n > 1){
        kq = max( kq, n);
    }
    return kq;
}
main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << solve(n) << endl;
    }
}