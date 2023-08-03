#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, x; cin >> n >> x;
    int a[n]; for(int &x : a) cin >> x;
    ll sum = 0, ans =0;
    map<ll,int>m;
    for(int i = 0; i< n; i++){
        sum +=a[i];
        if(sum == x) ++ans;
        if(m.count(sum - x)) {
            ++ans;
        }
        m[sum]= 1;
    }  cout << ans;
}