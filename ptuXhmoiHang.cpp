#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m;
    set<int>se;
    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        se.clear(); // xoa het cac ptu do di
        for (int j = 0; j < n; j++) {
            int x;cin >> x;
            if(se.count(x) == 0){
                 m[x]++;
                 se.insert(x);
                 // moi hang dem gtri 1 lan thoi
            }
        }
    }
    bool ok = false;
    for(auto x : m) {
        if(x.second == n) {
            cout << x.first << ' ';
            ok = true;
        }
    } 
    if(!ok) cout << "NOT FOUND" ;
}