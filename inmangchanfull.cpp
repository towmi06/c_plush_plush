#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    bool oke = false;
    for(int i = 0; i< n ; i++){
        if( i % 2 == 0 && a[i]% 2 ==0)   {
            cout << a[i] << ' ';
            oke = true;
        } 
    } if(!oke) cout << "NONE";
}