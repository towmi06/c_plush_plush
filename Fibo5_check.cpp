#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 1e6+1;
ll F[maxn];

bool check(ll n){
    F[0]= 0, F[1] = 1;
        for(int i =2 ; i<= 92; i++){
            F[i]= F[i-1]+F[i-2];
            if(F[i] == n) return true;
        } return false;
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(check(n)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}