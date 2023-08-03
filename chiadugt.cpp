#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    ll gt= 1;
    for(int i = 1; i <= n ; i++){
        gt = ((gt % mod) * (i % mod))% mod;// gt*=i; gt%=i
        cout << gt << endl;
    }
}
