#include<bits/stdc++.h>
using namespace std;
int cnt[1000001]; // 0=>1000000

int main(){
    int n; cin >> n;
    int a[n], ans=0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++)  cnt[a[i]] = 1;
    for(int i = 0; i<= 1000000; i++){// dem so ptu dc danh dau 
        if(cnt[i]==1) ++ans;
    }
    cout << ans << endl;
    /*in ra theo thu tu xh
        for(int i = 0; i < n; i++){
        if(cnt[a[i]] == 1){
            cout << a[i] << ' ';
            cnt[a[i]] = 0;    
        }
        */
}