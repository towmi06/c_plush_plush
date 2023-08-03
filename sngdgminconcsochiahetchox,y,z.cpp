#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll bcnn(ll a , ll b){
    return lcm(a,b);
}
int main(){
    ll x, y, z, n; cin >> x >> y >> z >> n;
    ll t = bcnn(bcnn(x,y), z);
    ll Min = pow(10, n -1);
    ll Max = pow(10, n) - 1;
    ll zz =(Min + t - 1)/ t * t;
    if(zz <= Max)    cout << zz;
    else cout << -1;
}