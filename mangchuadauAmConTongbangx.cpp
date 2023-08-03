#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    map<ll,int>m;
    ll sum =0, ans = 0;
    for(int &k : a) cin >>k;
    for(int i = 0; i< n; i++){
        sum += a[i];
        if(sum == x){
            ++ans;
        }if(m.count(sum-x)){
            ans +=m[sum-x];
        }
        m[sum]++;
    }cout << ans ;
}