#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    ll a[n];
    ll s1 =0, s2 = 0;
    for(ll &x : a) cin >> x;
    sort(a, a+n);
    k = min(k, n-k);// de k luc nao cx la tap nho hon
    for(int i = 0; i< n; i++){
        if( i < k) s1 += a[i];
        else s2 += a[i];
    }
    cout << s2 - s1;
}