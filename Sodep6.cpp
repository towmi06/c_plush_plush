#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    string t = s;
    reverse(t.begin(), t.end());
    long long res = s.find("6");
    return t == s && res != string :: npos;
}
int main(){
    string n; cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
}