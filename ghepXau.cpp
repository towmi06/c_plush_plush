#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(string a, string b){
    string ab = a+b;
    string ba = b+a;
    return ab >ba;
}
int main(){
    int n; cin >> n;
    string a[n];
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    for(string x : a) cout << x;
}