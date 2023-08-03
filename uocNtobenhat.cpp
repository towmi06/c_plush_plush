#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(int n){
    for(int i =2; i <= sqrt(n); i++){
        if(n% i == 0){
            return i;
        }
    }
    return n;
}
int main(){
    ll n; 
    cin >> n;
    for(int i = 1; i<= n; i++){
        cout << solve(i)<< endl;
    }
    return 0; 
}