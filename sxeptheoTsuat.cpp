#include<bits/stdc++.h>
using namespace std;

//Sxếp tsuất giảm dần, nếu cùng tsuất thì số nào nhỏ hơn sẽ in ra trước.
bool cmp(pair<int,int>a, pair<int,int>b){
    if(a.second != b.second)
        return a.second > b.second;
    return a.first <b.first;
}
//Sxếp tsuất giảm dần, nếu cùng tần suất thì số nào xuất hiện trước sẽ in ra trước.
bool cmp2(pair<int,int>a, pair<int,int>b){
        return a.second > b.second;
}
int main(){
    map<int,int>mp;
    int n; cin>> n;
    int a[n]; 
    for(int &x : a) cin >> x;
    for(int x : a) mp[x]++;
    //dua cac gtri cua mp luu vao vecto
    //sxep theo giam dan 
    vector<pair<int,int>>v;
    for(auto it : mp){
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v){
        // it.first: so; it.second: tan suat
        for(int j = 0; j <it.second; j++)
            cout << it.first << ' ';
    }
    cout << endl;

    //in theo tt xh:
    vector<pair<int,int>>v2;
    for(int x : a){
        if(mp.count(x)){
            v2.push_back({x,mp[x]});
            mp.erase(x);
        }
    }
    stable_sort(v2.begin(), v2.end(), cmp2);
    for(auto it : v2){
        // it.first: so; it.second: tan suat
        for(int j = 0; j <it.second; j++)
            cout << it.first << ' ';
    }
    cout << endl;
}