#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int cnt[1000001];

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){ // dem tsuat
        cin >> a[i];
        cnt[a[i]]++;
    }
    int tsuatmax = 0, res;
    for(int i = 0; i < n; i++){// in theo thu tu xh
        if(cnt[a[i]] > tsuatmax){
            tsuatmax = cnt[a[i]];
            res = a[i];
        }
    }
    cout << res << ' ' << tsuatmax << endl;
}