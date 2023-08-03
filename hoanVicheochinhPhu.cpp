#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n]; 
    for( int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if( i == j) cout << a[i][n-i-1]<< ' ';
            else if(j == n-i-1) cout << a[i][i] << ' ';
            else cout << a[i][j]<< ' ';
        } cout << endl;
    }
}