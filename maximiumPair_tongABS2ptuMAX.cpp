#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    ll a[n];
    for(auto &x : a) cin >> x;
    sort(a, a+n);
    cout << max(abs(a[0] + a[1]), abs(a[n-1] + a[n-2])) << endl;
}