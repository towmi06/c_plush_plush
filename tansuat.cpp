#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;
    map<int, int> mp;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        mp[a[i]]++;
    }
   for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << ' '<< it->second << endl;
    }
    cout << endl;
    // in theo ttxh
   for (int i = 0; i < n; i++) {
        if (mp[a[i]] != 0) {
            cout << a[i] << ' ' << mp[a[i]] << endl;
            mp[a[i]] = 0;// xoa nhung gtri in ra r
        }
    }
    return 0;
}