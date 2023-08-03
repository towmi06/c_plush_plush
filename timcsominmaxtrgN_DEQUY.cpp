#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll Max_index = 0, Min_index = 10;

void timMaxMin(ll n){
    if(n == 0)  return;
    Max_index = max(n % 10, Max_index);
    Min_index = min(n % 10, Min_index);
    timMaxMin(n/10);// loai bo so cuoi 
}

int main(){
    ll n; cin >> n;
    if(n == 0)  cout << 0 << ' ' << 0; 
    else {
        timMaxMin(n);
        cout << Max_index <<" "<< Min_index;
    }
}

/*
kieu tra ve 
int Min(ll n ){
    if( n == 0) return 10;
    else return min(n % 10, 1ll*Min(n /10));
}
int Max(ll n){
    if(n == 0)  return 0;
    else return max(n % 10, 1ll*Max(n/10));
}

*/