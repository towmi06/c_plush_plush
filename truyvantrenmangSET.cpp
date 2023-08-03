#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // luu cac gtri trung nhau 
    multiset<int> se;
    int n ; cin >> n;
    int a[n]; 
    for(int i = 0; i < n; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    int q; cin >> q;
    while(q--){
        int thaotac, x; cin >> thaotac>> x;
        if(thaotac == 1){
            // Thao tac1: them vao set
            se.insert(x);
        } else if(thaotac == 2){
            // Thao tac2: xoa 1 ptu, x k xh thi k xoa,nhieu x thi xoa 1;
            auto it = se.find(x);
            if(it != se.end()) // it tim thay
                se.erase(it);
        } else if(thaotac == 3){
            // thao tac3:
            if(se.count(x) != 0) cout << "YES"<< endl;
            else cout << "NO"<< endl;
        }
    }

}