#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    map<int, int> post;
    for(int &x : a) cin >> x;
    int ans = INT_MIN;
    for(int i = 0; i< n; i++){
        /*  a[i] = a[i]+k 
            or   = a[i]-k
        */
        if(post.count(a[i]+k))
            ans = max(ans, i - post[a[i]+k]);
        if(post.count(a[i]-k))
            ans = max(ans, i - post[a[i]-k]);
        if(post.count(a[i])==0) post[a[i]]=i;
    }
    if(ans == INT_MIN) cout << -1;
    else cout << ans;
}