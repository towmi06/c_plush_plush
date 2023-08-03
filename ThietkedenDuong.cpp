#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    // l la do dai quang dg 
    int n, l; cin >> n >> l;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n);
    double kc = max(a[0], l-a[n-1]);
    for(int x : a)
        kc = max(kc, (a[x] - a[x-1])/2.0);
    cout << fixed<< setprecision(10)<< kc ;
}