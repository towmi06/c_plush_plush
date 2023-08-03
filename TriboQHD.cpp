#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
using ll = long long ;
ll TR[1000001];

void tribo(){
    TR[0] = 0;
    TR[1] = 0;
    TR[2] = 1;
    for(int i = 3; i <= 1000000; i++){
        TR[i] = (TR[i-1] + TR[i-2] + TR[i-3]) % MOD;
    }
}

int main(){
    tribo();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << TR[n] << endl;
    }
    return 0;
}
