#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1000000007;

ll binpow(ll a, ll b){
    if(b==0)    return 1;
    ll tmp = binpow(a,b/2);
    if(b % 2 == 1)  return ((tmp % mod) * (tmp % mod)% mod) *(a % mod) % mod;
    else return  (tmp % mod) * (tmp% mod) % mod;
}
int main (){
    ll a, b; cin >> a >> b;
    cout << binpow(a,b) << endl;
}