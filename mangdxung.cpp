#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(int a[], int left, int right){
    if( left >= right) return true;
    if(a[left] != a[right]) return false;
    else return check(a, left +1, right - 1);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x: a) cin >> x;
    if(check(a, 0, n-1))    cout <<"YES";
    else cout << "NO";
}