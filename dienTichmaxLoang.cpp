#include<bits/stdc++.h>
using namespace std;
// 4 o chung canh
int dx[]= {-1,0,0,1};
int dy[]= {0,-1,1,0};
int n,m, cnt = 0, ans = 0;
int a[505][505];

void loang(int i , int j ){
    a[i][j]=0;
    cnt ++;
    for(int k = 0; k< 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if( i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1]==1){
            loang(i1, j1);
        }
    }
}
void nhap(){
    cin >> n>> m;
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<= m; j++){
            cin >> a[i][j];
        }
    }
}
int main(){
    
    nhap();
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<= m; j++){
            if(a[i][j]== 1){
                cnt = 0; // reset no de tranh cong don
                loang(i,j);
                ans = max(ans, cnt);
            }
        }
    } cout << ans;
}