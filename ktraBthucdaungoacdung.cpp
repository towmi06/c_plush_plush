#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool oke(char x, char y){
    return (x =='(' && y == ')') || (x=='[' && y==']')|| (x=='{' && y=='}'); 
}
bool check(string s){
    stack<char>st;//luu cac ki tu
    for(char x : s){
        if(x == '(' || x == '[' || x=='{')
            st.push(x);
        else {
            if(st.empty()) return false;
            if(!oke(st.top(), x)) return false;
            st.pop();
        }
    }
    if(st.empty()) return true;
    return false;
}
int main(){
    string s; cin >> s;
    if(check(s)) cout << "YES\n";
    else cout << "NO\n";
}