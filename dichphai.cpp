#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, k;cin >> n >> k;
    int a[n];
    for(int i = 1; i<= n; i++) cin >> a[i];
    k %=n;
    for(int i = n-k+1; i <= n; i++) cout <<a[i]<<' ';
    for(int i = 1; i<= n-k; i++) cout << a[i]<< ' ';
}