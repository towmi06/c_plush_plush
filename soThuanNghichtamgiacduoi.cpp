#include<bits/stdc++.h>
using namespace std;

int thuannghich(int n){
    int m = n, s = 0;//lat ngc
    while(m){
        s = s*10 + m%10;
        m /=10;
    } return s == n;
}

int main(){
    int n; cin >> n;
    int a[n][n];
    int ans = 0;
    for(int i = 0; i< n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    // duyet tam giac duoi 
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(thuannghich(a[i][j]))
                ans++;
        }
    }
    cout << ans;
}