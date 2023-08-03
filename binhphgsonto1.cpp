#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll n){
    for( ll i =2; i <= sqrt(n); i++){
        if(n % i == 0){
            int mu = 0; 
            while (n % i == 0){
                ++ mu; 
                n/=i;
            }
            if(mu>=2) return true; // i : i va i >i^2;
        }
    }
    return true;
}
int main(){
    int a, b; cin >> a >>b;
    for(int i = a; i<= b; i++){
        if(check(i)) cout << i <<" ";
    }
}