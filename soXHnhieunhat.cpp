#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k =0; cin >> n;
    int a[n];
    map<int,int>mp;
    int ans =0;
    for(int &x : a){
        cin >> x;
        mp[x]++;
    }    
     for (auto it : mp) {
        if (it.second > k) {
            ans = it.first;
            k = it.second;
        }
    }
    cout << ans << ' ' << k << endl;
}