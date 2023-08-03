#include<bits/stdc++.h>
using namespace std;

int T(int n){
    if(n == 0){
        return 0;
    } else 
        return n *(n+1)/2; // n + S(n-1)
}

int main(){
    int n; cin >> n;
    cout << T(n);
}