#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s;
    cin >> s;
    ll maxn = 0;
    ll sum = 0;
    for(char x : s){
        if(isdigit(x)) sum = sum *10+(x-'0'); // chuyen tu ki tu sang kieu so int
        else {
            sum = 0;
        }maxn = max(maxn , sum);
    } cout << maxn;
}
