#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int,int>>v;
    for(int i = 0; i< n ; i++){
        int a,  b; cin >> a >> b;
        v.push_back({a,1});
        v.push_back({b,-1});
    }
    sort(v.begin(), v.end());
    int dem =0, ans = 1;
    for(auto it : v){
        dem += it.second;
        ans = max(ans,dem);
    }
    cout << ans;
}