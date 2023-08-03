#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void in(ll n){
    if(n < 10)  cout << n;
    else  in(n/10);
}
int main (){
    ll n; cin >> n;
    in(n);
}
/*
int sum (ll n){
    if(n < 10)  return n;
    else return sum(n/10);
}
*/