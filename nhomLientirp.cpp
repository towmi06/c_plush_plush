#include<bits/stdc++.h>
using namespace  std;
/*
Ví dụ: với tập N = 7 và K = 1
2,6, 1, 7, 3, 4, 9 sẽ có 
các nhóm: {1, 2, 3, 4}, {6, 7},{9}
*/
int main(){
    int n,k; cin >> n >> k;
    int a[n]; for(int &x : a) cin >> x;
    sort(a,a+n);
    int ans = 1;
    for(int i = 1; i< n;i++){
        if(a[i] -a[i-1] <= k){
            continue;
        }else ++ans;
    }cout << ans;
}