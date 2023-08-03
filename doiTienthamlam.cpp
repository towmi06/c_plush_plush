#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll ans = 0;
    int a[] = {1000, 500, 200, 100, 50 ,20 ,10, 5 , 2 , 1};
    for(int i = 0; i< 10; i++){
        ans += n/a[i]; // dc bao nhieu to menh gia i
        n%=a[i]; //  giam di  so tien do
    }
    cout << ans;
}