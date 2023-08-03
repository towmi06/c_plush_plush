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
    int n; cin >> n;
    int a[n]; 
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    // in tan suat xh
     for(int i = 0; i< n; i++){
        if(mp[a[i]] != 0){
            cout << a[i] << ' '<< mp[a[i]]<< endl;
            mp[a[i]] = 0; //reset tsuat cu no ve 0, lap lai se k in nx
        }
     }
}