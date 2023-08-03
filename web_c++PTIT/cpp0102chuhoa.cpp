#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        char c; cin >> c;
        if((c >= 'a') && (c <= 'z')){
            c-=32;
        } else if(c >= 'A' && c <= 'Z'){
            c +=32;
        }
        cout << c << endl;
    }
} 