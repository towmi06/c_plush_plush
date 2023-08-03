#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int firstpost(int a[], int l, int r, int x){
    int ans = -1;
    while(l <= r){
        int m =(l+r)/2;
        if(a[m] > x){
            ans = m;
            r = m -1;
        } else l = m+1;
    }return ans;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    ll ans = 0;
    for(int i = 0; i< n; i++){
        int p = firstpost(a, i +1 , n-1, k-a[i]);
        if(p != -1) ans += n - 1 -p +1;
    }
    cout << ans ;
}