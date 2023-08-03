#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , c1,c2; cin >> n;
    int a[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    cin >>c1 >> c2;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j==c1) cout << a[i][c2]<< ' ';
            else if(j == c2) cout << a[i][c1]<< ' ';
            else cout << a[i][j]<<' ';
        } cout << endl;
    }
}