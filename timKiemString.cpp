#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    set<char>s1,t1,a;
    for(char x : s)   s1.insert(x);
    for(char x : t) t1.insert(x);
    for(char x : s1){
        if(t1.find(x) == t1.end())
            cout << x;
    }
    cout << endl;
    for(char x: t1) {
        if(s1.find(x) == s1.end())
            cout << x;
    }
}