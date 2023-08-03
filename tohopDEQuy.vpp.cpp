#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll kCn(int n, int k){
    if(k ==0 || n == k )    return 1;
    else return kCn(n-1, k-1) +kCn(n-1, k);
}

int main(){
    int n, k; cin >> n >> k;
    cout << kCn(n,k);
}