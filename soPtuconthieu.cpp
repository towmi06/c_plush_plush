#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int ans = 0;
    map<int,int>m;
    for(int &x : a) cin >> x;
    sort(a, a+n);
    for(int x : a) m[x] =1;
    cout << a[n-1]-a[0] - m.size();
}