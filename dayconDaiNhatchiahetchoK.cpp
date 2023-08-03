#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n>>k;
    int a[n];
    for(int &x : a) cin >> x;
    map<ll,int> mp;
    mp[0]=-1;
    int maxn = 0;
    ll sum = 0;
    for(int i = 0; i< n; i++){
        sum += a[i];
        sum = (sum % k +k)% k;
        if(mp.find(sum) != mp.end())
            maxn = max(i - mp[sum], maxn);
        else mp[sum]= i;
    }
    if(maxn == 0) cout << -1;
    else cout << maxn;
}