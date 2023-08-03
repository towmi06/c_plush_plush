#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    map<char,int>mp;
    for(char c : s) mp[c]++;
    int maxn = 0, minx = INT_MAX;
    char smax= s[0], smin = s[0];
    for(auto x : mp){
        if(maxn < x.second){
            maxn = x.second;
            smax = x.first;
        }
        else if(maxn == x.second && smax < x.first){
            smax = x.first;
        }
        if(minx > x.second){
            minx = x.second;
            smin = x.first;
        }
        else if(minx == x.second && smin < x.first){
            smin = x.first;
        }
    }
    cout << smax << ' '<<maxn << ' ' << endl<< smin<< ' '<< minx;
}