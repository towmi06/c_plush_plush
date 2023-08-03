#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i<= n-k; i++){
       int sum = 0;
       for(int j = 0; j< k; j++){
         sum += a[i + j];
       } 
       cout << sum << ' ';
    }
}