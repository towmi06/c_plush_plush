#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, m; cin >> n >> m;
    ll minn = INT_MAX;
    ll maxn = INT_MIN;
    ll a[n][m];
    for(int i = 0; i< n; i++){
        for(int j = 0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i =0; i< n; i++){
        for(int j = 0; j < m; j++){
            minn = min(minn, a[i][j]);
            maxn = max(maxn,a[i][j]);
        }
    }
    cout << minn << endl;
    for(int i =0; i< n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == minn)
                cout << i+1 << ' '<<j+1<< endl;
        }
    }
    cout << maxn << endl;
    for(int i =0; i< n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == maxn)
                cout << i+1 << ' '<<j+1<< endl;
        }
    }
}