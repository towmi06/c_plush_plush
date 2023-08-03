#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set <int> se; // multiset
    for(int i =0; i<7; i++){
        int x; cin >> x;
        se.insert(x);
    }
    //  ptu dau tien >=k;
    int k; cin >> k;
    //auto it = lower_bound(se.begin(), s.end(), k);
    auto it = se.lower_bound(k); // nhanh hon
    cout << *it << endl;
    // upper_bound ptu dau tien <= b
    int b; cin >> b;
    auto itt = se.upper_bound(b);
    cout << *itt<< endl;
}