#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int k = 6;
    int sum = 0;
    for(int i = 0; i< s.size(); i++){
        sum = sum * 10 + (s[i] - '0');
        // -'0' de chuyen thanh so;
        sum %= k;
    }
    if(sum == 0) cout << "YES";
    else cout << "NO";
}