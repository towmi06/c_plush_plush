#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int m = 1000001;
const int MOD = 1e9+7;
ll F[m+1]; // F[i]: so cac so nto tu 0->i
int nto[m+1];

void sang(){
    nto[0] =1, nto[1] = 1;
    for(int i = 2; i<= sqrt(m); i++){
        if(nto[i] == 0){
            for(int j = i*i; j < m; j+= i)
               nto[j] = 1;
        }
    }
    F[0]= 0, F[1]= 0, F[2]= 2;
    for(int i = 3; i< m; i++){
        if(nto[i]== 0){
            F[i]= F[i-1]*i;
            F[i] %= MOD;
        } else F[i]= F[i-1];
    }
}
int main(){
    sang();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << F[n]<< endl;
    }
}