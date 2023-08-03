#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, x; cin >> n >> x;
    int a[n]; cin >> n;
    for(int &x : a) cin >> x;
    sort(a,a+n);
    for(int i = 0; i< n; i++){
        // a[j]  = a [i] +x : x >0 : tu a[i+1]-> n-1
        //                  : x <0 : tu a[0]
        if(binary_search(a+i+1,a+n,x+a[i])){
            cout << 1;
            return 0;
        }
    }
    cout << -1;
}