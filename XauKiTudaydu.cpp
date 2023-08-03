#include<bits/stdc++.h>
using namespace std;

void chuyenHoa(string &s){
    for(char &x : s){
        x = tolower(x);
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    chuyenHoa(s);
    set<char>se;
    for(char x : s) se.insert(x);
    if(se.size()== 26) cout << "YES";
    else cout << "NO";
}