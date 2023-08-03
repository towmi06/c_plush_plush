#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n;
    m = n;
    int a[n+1][n+1], F[n+1][n+1];
    memset(F,0,sizeof(F)); 
    for(int i = 1; i<= n; i++){
        for( int j=1; j <= m; j++)
            cin >> a[i][j];
    }
    for(int i = 1; i<= n; i++){
        for( int j=1; j <= m; j++){
            F[i][j] = F[i-1][j] + F[i][j-1] - F[i-1][j-1] + a[i][j];
        }
    } 
    int maxn = INT_MIN;
    for(int x2 = 3; x2 <= n; x2 ++){
        for(int y2= 3; y2 <= m; y2 ++){
            int x1 = x2 - 2, y1 = y2 -2;
            int ans = F[x2][y2] - F[x1 -1][y2] - F[x2][y1-1]+F[x1-1][y1-1];
            maxn = max(maxn, ans);
        }
    } cout << maxn;
}