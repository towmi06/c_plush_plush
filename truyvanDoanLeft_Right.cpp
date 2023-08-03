#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    ll t[n+1]; // luu tong cac ptu tu 1-i
// left = 1 <=> t[right] vi vay chi can tinh t[r]- t[1-> l = l-1]
    t[0] = 0;
    for(int i= 1; i<= n; i++){
        int x; cin >> x;
        t[i] = t[i-1]+x;
    }
    int q; cin >> q; 
    while(q--){
        int l, r; cin >> l >> r;
        cout << t[r] - t[l-1] << endl;
    }
}