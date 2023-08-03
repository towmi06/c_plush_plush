#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n>> m;
    multiset<int>se;
    for(int i =0; i< n; i++){
        int x;cin >> x;
        se.insert(x);
    }
    for(int i = 0; i< m; i++){
        int k; cin >> k;
        // tim ra ve max <= x
        // -> tim ptu dtien > x xong -1;
        auto it =se.upper_bound(k);
        if(it == se.begin()) cout << -1 << endl;
        else {
            --it;
            cout <<*it << endl;
            se.erase(it);
        }
    }
}