#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int ans = INT_MAX;
    for(int &x : a) cin >> x;
    sort(a, a+n);
    for(int i =1; i< n; i++){
        if(a[i]- a[i-1] < ans)
            ans =  a[i]-a[i-1];
    }
    cout << ans;
}