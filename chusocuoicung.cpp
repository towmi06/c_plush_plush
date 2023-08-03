#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// n ^m= n * n *...: m lan 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k; cin >> n >> m >> k;
    ll res = pow(10,k);
    ll kq  = 1;
    for(int i = 1; i<= m; i++){
        kq *=n;
        kq %= res;
    }
    cout << kq << endl;
}