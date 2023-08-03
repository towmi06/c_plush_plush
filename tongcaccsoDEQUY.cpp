#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll tong(ll n){
    if(n == 0)  return 0;
    return n % 10 + tong(n/10);
}
int main(){
    ll n; cin >> n;
    cout << tong(n) ;
}