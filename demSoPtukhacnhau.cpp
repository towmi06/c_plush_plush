#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    int cnt = 1; // vi so dau tien k tinh
    for(int &x : a) cin >> x;
    sort(a, a+n);
    for(int i = 1; i< n; i++){
        if(a[i] != a[i-1]) cnt++;
    }cout << cnt ;
}