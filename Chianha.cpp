#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m, k; cin >> n >> m >> k;
    int a[n], b[m];
    int i = 0, j = 0, dem = 0;
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    sort(a, a+n);
    sort(b, b+m);
    while(i < n && j < m){
        if(abs(a[i]- b[j]) <= k ){
            dem ++;
            i++; j++;
        }// a[i]> b[j] 
        else if(a[i] - b[j] > k) j++;
        else i++; 
    } 
    cout << dem;
}