#include<bits/stdc++.h>
using namespace std;

int t, n, k, a[10005], ok;

void sinh() {
    int i = n;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        --i;
    }
    if (i == 0) ok = 0; 
    else a[i] = 1;
}
bool check() {
    int l = 1, r = n;
    while (l <= r) {
        if (a[l] != a[r]) return false;
        ++l;
        --r;
    }
    return true;
}

int main() {
    cin >> t;
    while (t--) {
    	ok = 1;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            a[i] = 0;
        }
        while (ok) {
            if (check()) {
                for (int i = 1; i <= n; i++) 
                    cout << a[i];
                cout << ' ';
            }
            sinh();
        }

        cout << endl;
    }
    return 0;
}
