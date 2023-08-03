#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool nto(int n){
    for(int i =2; i<= sqrt(n); i++){
        if(n % i ==0)   return false;
    }
    return n >1;
}

bool fibo(ll n){
    ll f1= 1, f2 = 1, fn;
    if(n == 1)  return true;
    else{
        for(int i = 3; i<= 93; i++){
            fn = f2 + f1;
            ll tmp = f2;
            f2 = fn; f1= tmp;
            if(n == fn) return true;
        }
        return false;
    }
}
int sum (int n){
    int tong = 0;
    while(n){
        tong += n %10;
        n /=10;
    }
    return tong;
}
int main(){
    int n; cin >> n;
    for(int i = 1; i<= n; i++){
        if(nto(i) && fibo(sum(i)))   cout << i <<" ";
    }
}