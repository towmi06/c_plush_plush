#include <iostream>
using namespace std;
using ll = long long;

void solve() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    ll a[n1], b[n2], c[n3];
    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int i = 0; i < n2; i++) cin >> b[i];
    for (int i = 0; i < n3; i++) cin >> c[i];
    
    int p1 = 0, p2 = 0, p3 = 0;
    bool found = false;
    while (p1 < n1 && p2 < n2 && p3 < n3) {
        if (a[p1] == b[p2] && b[p2] == c[p3]) {
            cout << a[p1] << " ";
            p1++; p2++; p3++;
            found = true;
        } else if (a[p1] <= b[p2] && a[p1] <= c[p3]) {
            p1++;
        } else if (b[p2] <= a[p1] && b[p2] <= c[p3]) {
            p2++;
        } else if (c[p3] <= a[p1] && c[p3] <= b[p2]) {
            p3++;
        }
    }
    if (!found) cout << -1;
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
