#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    string t = s;
    reverse(t.begin(), t.end());
    return t == s;
}
int main(){
    string s; cin >> s;
    if(check(s)) cout << "YES";
    else cout << "NO";
}