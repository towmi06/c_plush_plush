#include<bits/stdc++.h>
using namespace std;
using ll = long long;

// quan xe duyet theo 4  cheo
int dx[4]= {-1,0,0,1};
int dy[4]= {0,-1,1,0};
int n,s,t, a[105][105];
int cnt = 0;

void loang(int i, int j){
    // vi bai nay de bai cho 0 la dung di nen sua thanh 1
    a[i][j]=1;
    cnt ++;
    for(int k = 0; k< 4; k++){
        int i1 = i +dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1]==0){
            loang(i1,j1);
        }
    }
}

int main(){
    cin >> n >> s >> t;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= n; j++)
            cin >> a[i][j];
    }
    loang(s,t);
    cout << cnt;
}