#include<bits/stdc++.h>
using namespace std;
int n, k, t, a[1005];
void next() {
    int i = k;
    while (i >= 1 && a[i] == n - k + i)  --i;
    if (i == 0) {
        for (int i = 1; i <= k; i++)cout << i << ' ';
        cout << endl;
    }else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;
        for (int i = 1; i <= k; i++)cout << a[i] << ' ';
        cout << endl;
    }
}
int main() {
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)  cin >> a[i];
        next();
    }
}