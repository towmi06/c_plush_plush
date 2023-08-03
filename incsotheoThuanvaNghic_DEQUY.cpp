#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void thuan( ll n){
    if(n == 0)  return ;
    thuan(n/10); 
    cout <<  n % 10 <<" ";
}

void nghich(ll n){
    if(n == 0)  return;
    cout << n % 10 << ' ';
    nghich(n/10);
}
int main(){
    ll n; cin >> n;
    if(n == 0)  cout << 0 << endl << 0;
    else {
        thuan(n);
        cout << endl;
        nghich(n);
    }
}