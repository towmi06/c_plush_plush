#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[100][100];
// o chung canh
int dx[]= {-1,0,0,1};
int dy[]= {0,-1,1,0};
void nhap(){
    cin >> n>> m;
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<= m; j++)
            cin >> a[i][j];
    }
}
void loang(int i, int j){
    // danh dau a[i][j] = 0 : da duyet qua
    a[i][j]=0;
    // loang sang 4 o chung canh vs o (i,j) neu o do la so 1 
    for(int k=0; k<4; k++){
        int i1= i +dx[k];
        int j1 = j + dy[k];
        if(i1>=1 && i1 <= n && j1 >= 1 && j1 <=m){
            if(a[i1][j1] == 1)
                loang(i1,j1);
        }
    }
}
int main(){
    nhap();
    int dem = 0;
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<= m; j++){
            if(a[i][j]== 1){
                dem ++;
                loang(i,j);
            }
        }
    }cout << dem;
}