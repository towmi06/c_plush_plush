#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    // n : so luong, s : suc manh
    ll n, s; cin >> n >> s;
    pair<ll,ll>v[n];
    for(int i =0; i< n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v,v+n);

    for(int i = 0; i< n; i++){
        if(s <= v[i].first){
            cout << "NO";
            return 0;
        } else s += v[i].second;
    }
    cout << "YES";
}