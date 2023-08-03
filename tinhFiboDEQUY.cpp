#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int F(int n){
    if(n <= 1) return 0;
    if(n == 2) return 1;
    return F(n-1) +F(n-2);
}
int main(){
    int n; cin >> n;
    cout << F(n);
}