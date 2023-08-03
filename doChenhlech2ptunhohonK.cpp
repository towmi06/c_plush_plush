#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, k ; cin >> n >> k;
    int a[n]; 
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    ll ans = 1;
    for(int i = 0; i< n; i++){
        // a[i] : a[i]+k
        // vtri cuoi cung cua ptu <= a[i]+k;
       // trc tien tim vi tri dau tien lon hon k xg dich trai 
        auto it = upper_bound(a+i+1, a+n,a[i]+k);
        // dich sang trai 
        --it;
        ans = max(ans, (ll)(it - (a+i)+1));
    }
    cout << ans<< endl;
}