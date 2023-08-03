#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    ll sum=0, ans = 0;
    int a[n];
    map<ll,int>m;
    for(int &k : a) cin >> k;
    for(int i =0; i< n; i++){
        sum += a[i];
        sum = (sum % n + n) % n;
        if(sum == 0) ++ ans;
        if(m.count(sum)) ans+= m[sum];
        m[sum]++;
    } cout << ans;
}