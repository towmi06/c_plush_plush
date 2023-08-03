#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
const ll MOD = 1e9 + 7;
ll F[1000001];

void fibo(){
    F[1]=0;
    F[2] = 1;
    for(int i = 3; i <= 1000000; i++){
        F[i]= F[i-1]+F[i-2];
        F[i] %= MOD;
    }
}
int main(){
    fibo();
    ll n; cin >> n;
    cout << F[n];
}