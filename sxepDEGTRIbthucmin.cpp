#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a+1, a+n, greater<int>()); //sort tu  vtri 1
    ll ans =a[0];
    for(int i = 1; i< n; i++){
        if(i <=k) ans += a[i];
        else ans -=a[i];
    } cout << ans<< endl;
}