// Đếm cặp số nguyên tố cùng nhau
// la cap so k tinh hoan vi va = cach lay cac ptu dang sau
// cap so co UCLN = 1
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int ans = 0;// dem cap 
    for(int i = 0; i< n; i++){
        for(int j  = i +1; j < n; j++){
            // i-1 se bi lap nen k xet 
            if(__gcd(a[i], a[j])==1) ++ ans;
        }
    }
    cout << ans;
}