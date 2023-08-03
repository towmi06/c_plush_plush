#include<bits/stdc++.h>
using namespace std;

bool cmp(pair <int,pair<int, int>>a, pair<int,pair<int,int>>b){
    if(a.first != b.first) return a.first < b.first;
    else {
        if(a.second.first != b.second.first) 
            return a.second.first < b.second.first;
        else return a.second.second < b.second.second;
    }
}
int main(){
    int n; cin >> n; 
    pair<int, pair<int, int>>a[n]; // 3 tham so
    for(int i = 0; i< n; i++){
        cin >> a[i].first >> a[i].second.first >> a[i].second.second;
    }
    sort(a,a+n,cmp);
    for(auto  x : a) 
    cout << x.first << " "<< x.second.first << ' '<< x.second.second << endl;
}