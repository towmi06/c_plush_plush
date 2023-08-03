#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll sum( ll n){
    if(n == 0)  return 0;
    return 1 + sum(n/10);
}
int main(){
    ll n; cin >> n;
    if(n == 0) cout << 1;
    else cout << sum(n);
}