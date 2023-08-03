#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i <n ; i++) {
        cin >> a[i];
        b[i]= a[i];
    }
    sort(b,b+n);// tim kiesm nhanh
    for(int i = 0; i< n; i++){
        // nho nhat lon hon x 
        auto it = upper_bound(b, b+n, a[i]);
        if(it == b+n){// k co
            cout << "_ ";
        } else cout << *it << ' ';
    }
}