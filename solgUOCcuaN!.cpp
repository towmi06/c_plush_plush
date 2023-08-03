#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

bool checknto(int n){
    for(int i = 2; i<= sqrt(n); i++){
        if(n % i ==0)   return false;
    }
    return n > 1;
}

ll xhien(int n, int p){
    ll ans = 0;
    for(int i = p; i<= n; i*=p) {
        ans += n/i;
        ans %= mod;
    }
    return ans;
}
int main(){
    int n; cin >> n;
    ll tich = 1;
    for(int i = 1; i <= n; i++){
        if(checknto(i)){
            tich *= (xhien(n,i)+1);
            tich %= mod;
        }
    } cout << tich;
}