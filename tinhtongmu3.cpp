#include<bits/stdc++.h>
using namespace std;

long long  T(int n){
    if(n == 0){
        return 0;
    } else {
        return 1ll*n * n * n + T(n-1);
    }
}

int main(){
    int n; cin >> n;
    cout << T(n);
}