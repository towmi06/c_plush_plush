#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll n ; cin >> n;
    int  ans = 0;
    for(int i = 2; i<= sqrt(n); i++){
        if(n % i == 0){
            while(n % i ==0){
                n /= i;
            }
            ++ ans;
        }
    }
    if(n != 1) ++ ans ;
    cout << ans;
}