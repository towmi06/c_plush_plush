#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin >> n;
    vector<int> p;
    while (n--) {
        int m; cin >> m;
        if (m == 1) {// thêm một phần tử vào cuối vector
            int x;  cin >> x;
            p.push_back(x);
        } else if (!p.empty()) // vecto k rong va xoa ptu cuoi
            p.pop_back();
    }
    if (p.empty()) cout << "EMPTY";
    else {
        for (int i = 0; i < p.size(); i++)
            cout << p[i] << " ";
    }
    return 0;
}