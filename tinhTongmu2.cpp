#include<bits/stdc++.h>
using namespace std;

int S(int n){
    if(n == 0){
        return 0;
    } else 
    return n *n +S(n-1); // n * (n + 1) * (2n + 1) / 6
}
int main(){
    int n; cin >> n;
    cout << S(n);
}