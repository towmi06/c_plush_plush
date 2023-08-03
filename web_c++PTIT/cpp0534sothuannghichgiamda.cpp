#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> mp;

bool check(string a){
    int n=a.size();
    for(int i=0;i<=(n-1)/2;i++){
        if(a[i]!=a[n-i-1]) return 0;
    }
    return 1;
}

bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.first.size() == b.first.size()) return a.first > b.first;
    return a.first.size() > b.first.size();
}

int main(){
    string a;
    while(cin>>a){
        if(a.size() == 1) continue;
        if(check(a)) mp[a]++;
    }
    vector<pair<string, int>> b(mp.begin(), mp.end());
    sort(b.begin(), b.end(), cmp);
    for(int i=0;i<b.size();i++) cout<<b[i].first<<" "<<b[i].second<<endl;
}

