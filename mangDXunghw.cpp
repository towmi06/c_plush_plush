#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool check (int a[], int n){
    int l = 0, r = n-1;
    while(l <= r ){
        if(a[l] != a[r])    return false;
        ++l; --r;
    } return true;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(check(a, n)) cout << "YES\n";
    else cout << "NO\n";
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool check (int a[], int n){
    int l = 0, r = n-1;
    while(l <= r ){
        if(a[l] != a[r])    return false;
        ++l; --r;
    } return true;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(check(a, n)) cout << "YES\n";
    else cout << "NO\n";
}