#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a, pair<int,int> b){
    return a.second < b.second;
}
int main(){
    int n; cin >> n;
    pair<int,int>a[n];
    int ans = 1;
    
    for(int i = 0; i< n; i++){
        cin >> a[i].first >>a[i].second;
    }
    sort(a,a+n, cmp);;
    int maxn = a[0].second;
    for(int i = 1; i < n; i++){
        if(a[i].first > maxn){
            ++ans;
            maxn = a[i].second;
        }
    } cout << ans;
}