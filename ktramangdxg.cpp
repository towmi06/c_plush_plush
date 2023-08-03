#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n){
    if(n == -1) return true;
   if( a[n] % 2 ==1) return false;
   else return check(a, n-1);
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(check(a,n-1)) cout << "YES";
    else cout << "NO";
}