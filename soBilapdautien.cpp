#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>se;
    int n; cin >> n;;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i =0; i< n; i++){
        if(se.count(a[i])){
            cout << a[i]<< endl;
            return 0;
        }
        se.insert(a[i]);
    } cout << -1;
}