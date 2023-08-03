#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool fibo(ll n){
    ll f1= 1, f2 = 1, fn;
    if(n == 1)  return true;
    else{
        for(int i = 3; i<= 93; i++){
            fn = f2 + f1;
            ll tmp = f2;
            f2 = fn; f1= tmp;
            if(n == fn) return true;
        }
        return false;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(fibo(n)) cout <<"YES"<< endl;
        else cout <<"NO\n";
    }
}