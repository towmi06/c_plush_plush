#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int cnt [ 1000001];
int main(){
    int n ; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        cnt[a[i]]++; // tang tan suat a[i] len 
    }
    for(int i = 0; i <= 1000000; i++){
        if(cnt[i] != 0) cout << i << ' '<< cnt[i]<< endl;
    }
}