#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n);
    int ans = INT_MAX;
    for(int i = 1; i< n; i++){
        ans = min(ans, a[i] - a[i-1]);
    }
    cout << ans<< endl;
}