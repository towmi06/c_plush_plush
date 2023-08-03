#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int>se;
    map<int,int>mp;

    int n; cin >> n;
    int a[n];
    for(int i = 0; i< n; i++){
        cin >> a[i];
        se.insert(a[i]);
        mp[a[i]] = 1;
    }
    
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
       
        /*if(se.count(x) != 0) cout << "YES";
        else cout << "NO";
        */
       if(mp.find(x) == mp.end()) cout << "NO";
       else cout << "YES";
       cout << endl; 
    }
}