#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll gt(ll n){
    ll kq = 1;
    for(int i =1; i <= n; i++)    kq *=i;
    return kq;
}

ll kCn(ll n , ll k){
    return gt(n)/ (gt(n-k) * gt(k)); 
}
int main(){
    ll n; cin >> n;
    for(int i =0; i< n; i++){
        for(int j =0; j <= i; j++){
                cout << kCn( i, j) << ' ';
        }
        cout << endl;
    }
}