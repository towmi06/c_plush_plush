#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll n){
    ll r = n % 10;
    if(n == 0)  return true;
    if( r % 2 == 1)  return false;
    else return check(n/10);
}

int main(){
    ll n; cin >> n;
    if(check(n) || n == 0 )    cout << "YES";
    else cout << "NO";
}