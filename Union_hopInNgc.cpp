#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    set<int>se;

    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i< n ; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    for(int k = 0; k < m; k++){
        cin >> b[k];
        se.insert(b[k]);
    }
    // duyệt ngược của set
    for(auto it = se.rbegin(); it != se.rend(); it++)
        cout <<  *it << ' ';
}