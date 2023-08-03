#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll fibo[100];
void ktao(){ // tra ve 93 so fibo
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 92; i++){
        fibo[i] = fibo[i-1]+ fibo[i-2];
    }
}
bool check(ll n){
    for(int i = 0; i<= 92; i++){
        if( n == fibo[i]) return true;
    } return false;
}
int main(){
    ktao(); // in 1 lan
    /* in so fibo: for(int i = 0; i<= 92; i++){
         cout << i <<' '<< fibo[i] << endl;
    }*/
    int n ; cin >> n;
    ll a[n];
    for(int i = 0; i< n;i++) {
        cin >> a[i];
        if(check(a[i])) cout << a[i] << ' ';
    }
}