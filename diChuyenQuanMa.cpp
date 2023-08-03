#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int n, s, t, u, v, ok = 0;
int a[105][105];

void nhap() {
    cin >> n >> s >> t >> u >> v;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
}

void loang(int i, int j) {
    a[i][j] = 0;
    if(i == u && j == v) ok = 1;
    for(int k = 0; k < 8; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n) {
            if(a[i1][j1] == 1)
                loang(i1, j1);
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    nhap();
    loang(s, t);
    if(ok)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
