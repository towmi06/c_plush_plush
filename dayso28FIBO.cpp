#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;

int main(){
    int n; cin >> n;
    ll f1 = 0, f2 = 1, fn;
    if(n == 1 )    cout << 0;
    else if(n == 2)  cout << 1;
    else{
        for(int i =3; i <= n; i++){
            fn = f2 + f1;
            fn %= mod;
            ll tmp = f2;
            f2 = fn; f1 = tmp; 
        }
        cout << fn ;
    }       
}