#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n , m; cin >> n >> m;
    int a[n], b[m];
    bool ok = false;
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int j = 0; // con tro chay tren chi so cua b[m]
    for(int i = 0 ; i< n; i++){
       
        if(a[i]== b[j]) j++;
        if(j == m) {
            ok = true;
            break;
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
}