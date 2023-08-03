#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    set<int>a,b;
    for(int i = 0; i<n ; i++){
        int x; cin >> x;
        a.insert(x);
    }
    for(int i = 0; i< m; i++){
        int x; cin >> x;
        b.insert(x);
    }
    // giao 
    for(int x : a){
        if(b.count(x) != 0){
            cout << x << ' ';
        }
    }
    cout << endl;
    // hop
    for(int x: b){// cho b vao a
        a.insert(x);
    }
    for(int x : a) cout << x << ' ';
}