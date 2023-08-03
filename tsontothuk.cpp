#include<bits/stdc++.h>
using namespace std;
using ll =long long;

ll thso(ll n, ll k){
    int cnt = 0;
    for(int i=2; i<= sqrt(n); i++){
        while(n % i ==0){
            ++cnt;
            if(cnt == k)    return i;
            n /= i;
        }
    }
    if(n != 1)  ++cnt;
    if(cnt == k)     return n;
    return -1;
}
int main(){
    ll n, k; cin >> n >> k;
    cout << thso(n,k);
}