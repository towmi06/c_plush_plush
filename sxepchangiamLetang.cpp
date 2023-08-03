#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    if(a % 2 != b % 2){
        return a%2 > b%2;
    }else {
        if(a%2 == 1){
        return a>b;
        } else return a< b;
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort (a, a+n, cmp);
    for(int x : a) cout << x << ' ';
}