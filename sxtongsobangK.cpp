#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n>> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    ll ans = 0;
    for(int i = 0; i< n; i++){
        // a[i]: co bao nhie tg = k -a[i]
        auto it1 = lower_bound(a+i+1, a+n, k - a[i]);
        // chi tk tu i +1 dem cuoi day thoi tuc sau a[i]
        auto it2 = upper_bound(a + (i+1), a+ n , k-a[i]);
        ans += it2 - it1;
    }
    cout << ans;
}