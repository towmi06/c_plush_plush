#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[4]= {-1, 0, 0, 1};
int dy[4]= {0, -1, 1, 0};

int n, m, s, t, u, v, ok =false;
int a[105][105];

void dfs(int i, int j){
    a[i][j]=0;
    if(i == u && j == v) ok =1;
    for(int k = 0; k < 4; k++){    
        int i1 = i + dx[k];
        int j1 = j +dy[k];
        if(i1 >=1 && i1 <=n && j1 >=1 && j1 <=m){
            if(a[i1][j1]==1){
                dfs(i1,j1);
                a[i1][j1]=0;
            }
        }
    }
}
int main(){
    cin >> n >> m >> s >> t >> u >> v;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    dfs(s,t);
    if(ok) cout << "YES\n";
    else cout << "NO\n";
}