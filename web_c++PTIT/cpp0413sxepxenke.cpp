#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int left = 0, right = n - 1;
        while (left < right) {
            cout << a[right--] << " ";
            cout << a[left++] << " ";
        }
        if (n % 2 != 0) {
            cout << a[left];
        }
        cout << endl;
    }
    return 0;
}
