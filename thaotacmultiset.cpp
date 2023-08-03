#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    multiset<int>se;
    for(int &x : a){
        cin >> x;
        se.insert(x);
    }
    int t; cin >> t;
    while(t--){
        int tc, x; cin >> tc;
        if(tc == 1){
            cin >> x;
            se.insert(x);
        }
        if(tc == 2){
            cin >> x;
            auto it = se.find(x);
            if(it != se.end())se.erase(it);
        }
        if(tc == 3){
            cin >> x;
            auto it = se.find(x);
            if(it != se.end())cout << "YES"<< endl;
            else cout <<"NO"<< endl;
        }
    }
}