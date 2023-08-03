#include<iostream>
using namespace std;

using ll = long long;
ll bac(ll n, ll p){
    ll kq = 0;
    for(ll i = p; i <= n; i*= p){ // duyet qua ca boi cua p vs buowc nhay p
        kq += n/i;
    }
    return kq;
}

int main (){
    ll n, p; cin >> n >> p;
    cout << bac(n, p);
}
