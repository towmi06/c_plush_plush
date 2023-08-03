#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int maxn = 1e6 +1;
ll F[maxn]; // F[i] luu tong cac so tu 0->i

int main(){
    int n; cin >> n;
    F[0]=0;
    for(int i = 1; i<= n; i++){
        int x; cin >> x;
        F[i] = F[i-1]+x;
    }
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        cout << F[r] - F[l-1] << endl;
    }
}