// set
#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    set <int>se;
    for(int i = 0; i< n; i++){
        int tmp; cin >> tmp;
        se.insert(tmp);
    }
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        if(se.find(x) == se. end()) cout << "KHONG TIM THAY"<< endl;
        else cout << "YES"<< endl;
    }
}