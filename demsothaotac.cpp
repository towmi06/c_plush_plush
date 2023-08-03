#include<bits/stdc++.h>
using namespace std;
using ll = long long; 

int dq(int n){
    ll x = 1e9, y = 1e9, z = 1e9;//=10^9 de phong cac trg hop k thoa man
    if(n==1)    return 0;
    if(n % 2 == 0)  x = 1 + dq(n/2);// cu moi lan bien doi + 1 thao tac
    if(n % 3 == 0)  y = 1 + dq(n / 3);
    if(n > 1) z = 1 + dq(n-1);

    return min({x,y,z});
}
int main(){
    int n; cin >> n;
    cout << dq(n);
}