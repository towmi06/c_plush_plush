#include<bits/stdc++.h>
using namespace std;

void dequy( long long n){
    if(n < 2)    cout << n;
    else {
        dequy(n/2);
        cout << n%2;
    }
}
int main(){
    long long n; cin >> n;
    dequy(n);
}