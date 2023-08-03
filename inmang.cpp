#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void thuan(int a[], int n){
    if( n == -1) return;
    thuan(a, n-1);
    cout << a[n] <<' ';
}
void nghich(int a[], int n){
    if( n == -1) return;
    cout << a[n] << ' ';
    nghich(a, n-1);
}
int main(){
    int n; cin  >> n;
    int a[n];
    for(int &x : a) cin >> x;
    thuan(a, n-1);
    cout << endl;
    nghich(a, n-1);
}