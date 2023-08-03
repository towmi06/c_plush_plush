#include<bits/stdc++.h>
using namespace std;

int main(){

    map<pair<int,int> , int> mp;
    int n; cin >> n;
    while(n--){
        int a, b; cin >> a >> b;
        mp[{a,b}] = 1;
    }
    cout << mp.size()<< endl;
}