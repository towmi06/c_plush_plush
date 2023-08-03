#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;
vector<int> v;

bool  check(int n){
    int r = n %10; // tk dung sau
    while(n){
        int x = n % 10; // tk dung trc
        if(r < x) return false;
        r = x;
        n /=10;
    }
    return true;
}
bool cmp(int x, int r){
    if(mp[x] != mp[r] ) return mp[x] > mp[r];
    else return x < r;
}
int main(){
    int n;
    while(cin >> n){
        if(check(n)){
            mp[n]++;
            v.push_back(n);
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(int x : v){
        if(mp[x] != 0){
            cout << x << ' '<< mp[x] << endl;
            mp[x] = 0;
        }
    }
}