#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n, int x){
    if(n == -1) return false;// chay tu n-1 ve _ tuc chay het ptu trong mang
    if(a[n] == x ) return true;
    else return check(a, n-1; x);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int x; cin >> x;
    if(check(a, n-1, x)) cout << 1;
    else cout << 0;

}