#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int lon =0, nho = 0;
    int a[n];
    for(int &x : a) cin >> x;
    int k ; cin >> k;
    for(int x : a) {
        if(x > k)  ++ lon;
        else if(x < k) ++nho;
    }
    cout << nho<< endl<< lon;
}