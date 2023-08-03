#include<bits/stdc++.h>
using namespace std;
using ll =  long long ;

// 1 2 3 1 2 cac cap so la 12, 21 , 12
// i = 0-> j = 1 => 1 + 2 = 3 => 1 cap
int main(){
    ll n; cin >> n;
    int a[n]; 
    for(int &x : a) cin >> x;
    int k, ans = 0; cin >> k;
    for(int i = 0; i< n; i++){
        for(int j = i+1 ; j < n; j++){ //  de k bi hoan vi
            if(a[i] + a[j] == k) ++ ans;
        }
    } cout << ans;
}