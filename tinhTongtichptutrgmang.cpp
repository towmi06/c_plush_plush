#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll tong = 0, tich = 1;
    for(int x : a){
        tong += x;
        tich *= x;
        tong %= mod;
        tich %= mod;
    } cout << tong << endl << tich;
}