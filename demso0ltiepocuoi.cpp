#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int mod = 1000000007;
ll bac(ll n, ll p){
    ll ans = 0;
    for(ll i = p; i<= n; i*=p){
        ans += n/i;
        ans %= mod;
    }
    return ans;
}

int main(){
    ll n;cin >> n;
    cout << bac(n, 5) << endl;
}