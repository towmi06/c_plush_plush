#include<bits/stdc++.h>
using namespace std;
using ll = long long;


ll gcd(ll a, ll b){
    if(b == 0)  return a;
    else return gcd(b, a%b);
}

int main(){
    ll a,b; cin >> a >> b;
    cout << gcd(a,b)<< ' ' << b/gcd(a,b)*a; 
}
/*
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b; cin >> a >> b;
    cout << gcd(a,b)<<' '<< lcm(a,b);
}*/