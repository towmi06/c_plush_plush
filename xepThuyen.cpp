#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, x; cin >> n >> x;
    int a[n]; 
    for(int &k : a) cin >> k;
    sort(a, a+n);
    int l = 0, r = n-1, dem =0;
    while(l < r){
        if(a[l] + a[r] <= x){
            ++dem;
            l++; r--;
        }else {
            ++dem;
            --r;
        }
    }
    if(l == r) ++dem;
    cout << dem;
}