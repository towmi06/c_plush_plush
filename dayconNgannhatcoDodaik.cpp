#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    int a[n]; int sum = 0;
    map<int,int> mp;
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    int ans = INT_MAX;
    for(int i = 0; i< n; i++){
        sum += a[i]; //0+1+..+i
        // day con co sum tu dau den cuoi bang k 
        // dc goi la day con dai nhat
        if(sum == k) ans = min(ans, i+1);
        if(mp.find(sum - k) != mp.end()){
            ans = min(ans, i-mp[sum-k]);
        }
        mp[sum] = i; // luu lai chi so i
    }
    if(ans == INT_MAX) cout << -1;
    else cout << ans;
}
