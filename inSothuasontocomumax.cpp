#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll muMax = 0, cosoMax = -1 ;
    for(int  i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int mu = 0;
            while (n % i == 0){
                ++mu;
                n/=i;
            } 
            if( mu > muMax){
                 muMax = mu;
                 cosoMax = i;
            }  
        }
    }
    if( n != 1 && cosoMax == -1){
        muMax = 1;
        cosoMax = n;
    }
    cout << cosoMax << " " << muMax;
}