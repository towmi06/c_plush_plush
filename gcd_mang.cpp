#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans =0;
    for(ll  x : a){
        ans = __gcd(ans, x);
    } cout << ans<< endl;
}