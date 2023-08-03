#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int>se;

    int n ; cin >> n; 
    int a[n];
    for(int i = 0; i <n ; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    
    int q; cin >> q;
    while(q--){
        int tt ; cin >> tt  ;
        if( tt == 1){
             int x;
            cin >> x;
            // tt1: them ptu vao mang
            se.insert(x);
        }
         else if( tt == 2){
             int x;
            cin >> x;
            // xoa moi gtri x tong tai trg mag
            se.erase(x);
        }
        else if(tt == 3){
            auto it = se.begin();
            cout<< *it << endl;
        } 
        else if(tt == 4){
            auto it = se.rbegin();
            cout << *it << endl;
        } 
    }
    return 0;
}