#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<char,int>mp;
    int n; cin >> n;
    for(int i =0; i< n; i++){
        char c; cin >> c;
        mp[c]++;
    }
    cout << mp.begin()-> first << ' ' << mp.begin() -> second<< endl;
    cout << endl;
    cout << mp.rbegin()->first << ' '<< mp.rbegin()->second << endl;
    cout << endl;
    // in xuoi
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << ' '<< it ->second << endl;
    }
    cout << endl;
    // in ngc
    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        cout << it ->first << ' '<< it->second << endl;
    }
}