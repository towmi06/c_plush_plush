#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

bool check(ll n){
    for(int i =1; i <= sqrt(n); i++){
        if(i * i == n) return true;
    }
    return false;
}
int main(){
    ll n; cin >> n;
    if(check(n))    cout << "YES\n" ;
    else cout << "NO\n";
}