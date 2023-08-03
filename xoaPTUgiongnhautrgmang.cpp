#include<bits/stdc++.h>
using namespace std;
// xoa ptu lke giong nhau thi tuc la in 2  ptu lke khac nhau
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x:a) cin >>x;
    cout << a[0] << " ";
    for(int i = 1; i< n; i++){
        if(a[i] != a[i-1]) cout << a[i]<<' ';
    }
}