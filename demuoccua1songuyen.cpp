#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    long long tich = 1;
    for(int i = 1; i<= n; i++){
        int a,b; cin >> a >> b;
        tich *=(b+1);
        tich %= MOD;
    }
    cout << tich;
}