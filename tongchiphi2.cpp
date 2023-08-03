#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int f[105][105];

int main() {
    int n,m;cin >> n;
      m=n;
    int a[n+1][m+1];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(j == 1) {
                f[i][j] = max(f[i-1][j], f[i-1][j+1]) + a[i][j];
            } else if(j == n) {
                f[i][j] = max(f[i-1][j], f[i-1][j-1]) + a[i][j];
            } else {
                f[i][j] = max(max(f[i-1][j-1], f[i-1][j]), f[i-1][j+1]) + a[i][j];
            }
        }
    }

    int res = 0;
    for(int j = 1; j <= n; j++) {
        res = max(res, f[n][j]);
    }
    cout << res << endl;

    return 0;
}
