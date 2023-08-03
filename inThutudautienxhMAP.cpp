#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int,int>mp;
    int n; cin >> n;
    int a[n];
    int tsuat = 0, res;
    for(int i = 0; i< n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for(auto it : mp){
        if(it.second > tsuat){
            tsuat = it.second;
            res = it.first; // gtri xh nhieu nhat
// ban than map da sxep key theo thu tu tang dan r 
// nen no se lay gtri xh dau 
// con muon lay cai xh sau thi cho if them dau = lay nhieu gtri
        }
    }
    cout << res << ' '<< tsuat << endl;
}