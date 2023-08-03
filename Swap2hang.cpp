#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , h1 ,h2; cin >> n;
    int a[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    // vi chi so hang de bai cho bat dau =1
    cin >> h1 >> h2;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == h1) cout << a[h2][j]<< ' ';
            else if(i == h2) cout << a[h1][j]<< ' ';
            else cout << a[i][j]<<' ';
        } cout << endl;
    }
}