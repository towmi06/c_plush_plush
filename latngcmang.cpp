#include<bits/stdc++.h>
using namespace std;

void lat(int a[], int n){
    int l = 0, r = n-1;
    while(l< r){
        swap(a[l], a[r]);
        ++l; --r;
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    lat(a,n);// goi ham lat;
    for(int x: a)
    cout << x<< ' '; // in giá trị của phần tử khi dao ngc
}