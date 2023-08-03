#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main(){
    int n; cin >> n;
    ll sum = 0;
    for(int i = 0; i< n; i++){
       ll x; cin >> x;
        sum = ((sum % mod)+ (x % mod))% mod;
        // hoac dung cach khac sum += x; sum % mod;
    }
    cout << sum;
}