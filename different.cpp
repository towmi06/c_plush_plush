#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int>mp;
    int n, m; cin >> n >> m;
    int a[n], b[m];

    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]=1;
    }
    for(int j = 0; j < m; j++){
        cin >> b[j];
        if(mp[b[j]] == 1) // da xh trg mang a r
            mp[b[j]] = 2;
    }
    // in theo thu tu tu be den lon cua a[n]
    for(auto it : mp){
        if(it.second == 1)
            cout << it.first << ' ';
    }
}