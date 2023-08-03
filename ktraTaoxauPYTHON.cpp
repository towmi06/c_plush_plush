#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s; getline(cin,s);
    string t = "python";
    int idx =0;// chi so cua t
    for(int i = 0; i < s.size(); i++){
        if(s[i] == t[idx]) ++idx;
        if(idx == 6) {
            // day du ki tu
            cout << "YES\n";
            return 0;
        }
    } cout << "NO\n";
}