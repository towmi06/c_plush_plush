#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    priority_queue<ll,vector<ll>,greater<ll>>q;
    int n; cin >> n;
    for(int i = 0; i< n; i++){
        int x; cin >> x;
        q.push(x);
    }
    ll ans = 0;
    while(q.size() > 1){
        ll top1= q.top(); // soi ngan nhat;
        q.pop(); // xoa no di;
        ll top2 = q.top();
        q.pop();
        ans += top1 +top2;
        q.push(top1 +top2);
    }
    cout << ans;
}