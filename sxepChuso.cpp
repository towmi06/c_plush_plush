#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    set<int> se;
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    for(int i =0; i< n; i++){
        while(a[i] > 0){
            int r = a[i] %10;
            se.insert(r);
            a[i] /= 10;
        }
    }
    for(int x : se) cout << x << ' ';
}