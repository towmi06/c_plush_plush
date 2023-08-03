#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// phan tuw k va sau k len dau va cac ptu con lai in ra duoi
// 8 6:  16 66 96 73 11 13 99 82
// -> 99 82 16 66 96 73 11 13 
int main(){
    int n, k; cin >> n >> k;// k la so buoc di xhuyen
    int a[n +1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    k %= n; // du no ve ban dau 
    for(int i = k +1; i<= n ; i++){
            cout << a[i] << ' '; // dua len dau
           
    }
    for(int i = 1; i<= k ; i++) cout << a[i]<<' '; // dua ra cuoi
}