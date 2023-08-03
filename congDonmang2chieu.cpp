#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n;
    m = n;
    int a[n+1][n+1], F[n+1][n+1];
    memset(F,0,sizeof(F)); 
    /* memset cho  all gtri mang F  = 0
    memset chi nhan gtri 0, -1 , true, false;
    */
    for(int i = 1; i<= n; i++){
        for( int j=1; j <= m; j++)
            cin >> a[i][j];
    }
    for(int i = 1; i<= n; i++){
        for( int j=1; j <= m; j++){
            F[i][j] = F[i-1][j] + F[i][j-1] - F[i-1][j-1] + a[i][j];
        }
    } 
    int t; cin >> t;
    while(t--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int res = F[x2][y2] - F[x1-1][y2] - F[x2][y1-1] + F[x1-1][y1-1];
        cout << res << endl;
    }
}