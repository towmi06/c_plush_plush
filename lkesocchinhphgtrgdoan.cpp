#include<bits/stdc++.h>
using namespace std;

using ll= long long;

int main(){
    ll a, b; cin >> a >> b;
    int c1= sqrt(a), c2 = sqrt(b);
    if(1ll * c1 * c1 < a) ++c1; // tranh TH khai can a no lam tron xuong
    for(ll i = c1; i <= c2; i++){
         cout <<1ll * i* i <<' ';
    }
}