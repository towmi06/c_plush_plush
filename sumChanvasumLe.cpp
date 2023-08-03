#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int chan( ll n){
    if(n == 0)  return 0;
    int r = n % 10;
    if(r % 2 ==0)   return r + chan(n/10);
    else return 0 + chan(n/10);
}
int le(ll n){
    if(n ==0)   return 0;
    int r = n % 10;
    if( r % 2 != 0) return r + le(n/10);
    else return 0 + le(n /10);
}
int main(){
    ll n; cin >> n;
    cout << chan(n) << endl << le(n);
}