#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,m; cin >> n>>  m;
    int a[n][m];
    for(int i = 0; i< n; i++){
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    //tong theo hang
    for(int i = 0; i< n; i++){
        ll sum  = 0;
        for(int j = 0; j< m; j++){
            sum += a[i][j];
        } cout <<sum << ' ';
    } cout << endl;
    // theo cot
    for(int j = 0; j< m; j++){
        ll sum = 0;
        for (int i = 0; i< n; i++){
            sum += a[i][j];
        } cout << sum << ' ';
    }cout << endl;
}