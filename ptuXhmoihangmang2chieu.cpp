#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n+1][n+1], d[105] = {0};
    for(int i = 1; i<= n; i++){
        for( int j=1; j <= n; j++)
            cin >> a[i][j];
    }
    for(int i = 1; i<= n; i++){
        for( int j=1; j <= n; j++){
            if(d[a[i][j]] == i-1){
                d[a[i][j]] =i;
            }
        }
    }
    int oke = 0; // bien danh dau;
    for(int val = 0; val <= 100; val ++){
        if(d[val] == n) {
            oke = 1;
            cout << val << ' ';
        }
    } if(!oke) cout << "NOT FOUND";
}