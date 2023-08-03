#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a)cin >> x;
    int k = 0; int Min = 99999999;
    for(int i =0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            k  = abs(a[j] - a[i]);
           Min = min(k, Min);
        } 
    } cout << Min;
}