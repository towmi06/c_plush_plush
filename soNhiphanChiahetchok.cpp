#include<bits/stdc++.h>
using namespace std;

// NP duyet tu cuoi len va nhan *2^0 tang dan

int main(){
    string n; cin >> n;
    long long sum =0;
    for(int i= n.size()-1; i>=0; i--){
        sum += sum *2 + (n[i]- '0');
        sum %=5;
    }
    if(sum ==0) cout << "YES";
    else cout << "NO";
}