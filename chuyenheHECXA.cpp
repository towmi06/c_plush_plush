#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void hec(ll n){
    if(n < 16){
        if(n <10)   cout << n;
        else cout << (char)(n+55);//n >= 10 ma A bat dau tu 65
    }
    else{
        hec(n/16);
        ll r = n%16;
        if(r<10)    cout << r;
        else cout << (char)(r+55);
    }
}
int main(){
    ll n; cin >>n;
    hec(n);
}