#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll F[100];

void fibo(){
    F[0]= 0;
    F[1]= 1;
    for(int i = 2; i<= 92; i++){
        F[i]= F[i-1] + F[i-2];
    }
}
bool check(ll n){
    for(int i = 0 ; i<= 92; i++){
        if(F[i] == n) return true;
    }// no chua chay het nen k dc else tai day
    return false;
}
int main(){
    ll n; cin >> n;
    fibo();
    if(check(n)){
        cout << "YES";
    }else cout << "NO";
}