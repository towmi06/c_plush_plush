#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    map<int, int> mp;

    int a[n], b[m];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] = 1;
    }

    for (int j = 0; j < m; j++) {
        cin >> b[j];
        if (mp[b[j]] == 1) { // đã xuất hiện trong mảng A
            mp[b[j]] = 2;
        } else if (mp.count(b[j]) == 0) {
            mp[b[j]] = 3; // chỉ xuất hiện trong mảng B
        }
    }

    // In theo thứ tự từ bé đến lớn của các phần tử
    for (auto it : mp) {
        if (it.second != 2) {
            cout << it.first << ' ';
        }
    }

    return 0;
}
