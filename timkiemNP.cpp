#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    set<int>se;
    for(int &x : a){
        cin >> x;
        se.insert(x);
    }
    int q; cin>> q;
    while(q--){
        int k; cin >> k;
        if(se.find(k) == se.end())
            cout << "NO"<< endl;
        else cout << "YES"  << endl;
    }
}