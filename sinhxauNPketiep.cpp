#include<bits/stdc++.h>
using namespace std;
int t;
string s;
void next(string s){
    int i = s.length()-1;
    while(i >= 0 && s[i] == '1'){
        s[i]= '0';
        --i;
    }
    if( i != -1) s[i] = '1';
    cout << s<< endl;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while(t--){
        cin >> s;
        next(s);
    }
}