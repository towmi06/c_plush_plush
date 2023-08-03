#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    multiset<int> se;

    int n ; cin >> n;
    int a[n];
    for(int i = 0; i< n; i++){
        int x; cin >> x;
        se.insert(x);
    }

    int t; cin >> t;
    while(t--){
        int tt, x; cin >> tt >> x;

        if(tt == 1){
           se.insert(x);
        }

        else if(tt == 2){
            auto it= se.find(x);
            if(it != se.end()) se.erase(it);
        }
        // >=
        else if(tt == 3){
            auto it = se.lower_bound(x);
            if(it == se.end()) cout << -1;
            else cout << *it; 
            cout << endl;
        }
        // <=
        else if(tt == 4){
            auto it = se.upper_bound(x);
            if(it == se.begin()) 
                cout << -1;
            else cout <<*(--it) ; 
            cout << endl;
        }
    }
    return 0;
}