#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k; cin >> n >> m >> k;
    int a[n];
    for(int &x: a) cin >> x;
    for(int i = 0; i< k-1; i++) cout << a[i] << ' ';
    cout << m <<' ';
    for(int i = k-1; i < n; i++) cout <<a[i]<<' ';
}