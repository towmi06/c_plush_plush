#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    long long kq=0; 
    for(int i=1; i<= n; i++){
        kq += i*i*i;
    }
    cout << kq;
    return 0;
}
