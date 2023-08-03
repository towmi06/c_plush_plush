#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    map<int, int> mp; 
    // key: gtri; value: tan suat
    for(int i = 0; i< n; i++){
        int x; cin >> x;
        // tang tan xuat cua x
        mp[x]++;
    }
    // duyet tung cap
    for(auto it : mp) 
        cout << it.first << ' '<< it.second<< endl;
}