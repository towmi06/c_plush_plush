#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool checknto(int n){
    for(int i = 2; i <=sqrt(n); i++){
        if(n % i == 0) return false;
    }return n>1;
}
int main(){
    int n; cin >> n;
    int a[n+1][n+1];
    int ans =0;
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i =1;i<= n; i++){
        if(checknto (a[i][i])) ++ans;
        // dg cheo phu
        if(checknto (a[i][n-i+1]))++ans;
    }
    if(n % 2 == 1 && checknto(a[(n+1)/2][(n+1)/2])) -- ans;
    cout << ans;
}