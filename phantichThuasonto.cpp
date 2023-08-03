#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void ptich(ll n){
    for(int i = 2; i<= sqrt(n); i++){
        if(n% i == 0){
            int mu = 0;
            while( n % i == 0){
                ++ mu;
                n/=i;
            }
            cout << i << "^" << mu ;// vd 27 = 3^3 nen neu k chia  th thi se bi thua so 3
            if(n != 1){
                cout<< " * ";
                }
        }
    }
    if(n > 1){
        cout << n << "^1"; // vd thua so nto cuoi cung luc nao so mu cx bang 1
    }
}

int main (){
    ll n; cin >> n;
    ptich(n);
}