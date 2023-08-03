#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    map<ll,int> mp;
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    ll sum = 0; 
    mp[0]=1;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(mp[sum]== 1){
            cout << 1;
            return 0;
        } mp[sum] = 1;
    } cout << -1;
}