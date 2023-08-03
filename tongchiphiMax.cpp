#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n,m;
ll F[105][105];// danh dau chi phi
int main(){
    cin >> n >> m;    
    int a[n+1][m+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= m; j++){
            F[i][j]= (max(F[i-1][j],F[i][j-1]))+a[i][j];
        }
    }
    cout << F[n][m];
}