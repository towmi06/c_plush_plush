#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    // 1 day so chia doi de tao thanh 2 so co tong min
    sort(a, a+ n);
    ll s1 = 0, s2= 0;
    for(int i =0; i< n; i++){
        if(i % 2 == 0) s1 = s1 *10+a[i];
        else s2 = s2 *10 +a[i];
    } cout << s1 + s2;
}