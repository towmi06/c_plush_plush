#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll F[100];

void fibo(){
    F[0] = 1;
    F[1] = 1;
    for(int i = 2; i<= 92; i++)
        F[i] = F[i-1] + F[i-2];
}

int main(){
    fibo();
    ll n; cin >> n;
    for(int i =  0; i<= 92; i++){
        if(F[i] >= n)   {
            cout << F[i];
            return 0;
        }
    }
}