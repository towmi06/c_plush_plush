#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    if( n == 0|| n ==1)  cout << "YES";
    else{
        ll f1 = 0, f2 =1, fn ;
        for(int i = 3; i<= 93; i++){
            fn = f2 +f1;
            ll tmp =f2;
            f2 = fn; f1 = tmp;
            if(fn == n) {
                cout << "YES\n";
            }cout << "NO";
        }
    }
    return 0;
}