#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mp;
    string s;
    getline(cin, s);
    string tmp;
    int maxn = INT_MIN, minx = INT_MAX;
    string smax = "", smin = "";
    stringstream ss(s);
    
    while(ss >> tmp){
        mp[tmp]++;
    }
    
    for(auto x : mp){
        if(x.second > maxn){
            maxn = x.second;
            smax = x.first;
        }
        else if(x.second == maxn && x.first > smax){
            smax = x.first;
        }
        
        if(x.second < minx){
            minx = x.second;
            smin = x.first;
        }
        else if(x.second == minx && x.first > smin){
            smin = x.first;
        }
    }
    
    cout << smax << " " << maxn << endl;
    cout << smin << " " << minx;
    
    return 0;
}
