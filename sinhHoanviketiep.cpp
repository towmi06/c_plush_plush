#include<bits/stdc++.h>
using namespace std;
int t, n, a[10005];

void next() {
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1]) {
        --i;
    }
    if (i == 0) {
        for (int i = 1; i <= n; i++) {
            cout << i << ' '; // In dãy số từ 1 đến n, vì đây là cấu hình cuối cùng
        }
    } else {
        int j = n;
        while (a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1); // Đảo ngược các phần tử từ vị trí i + 1 đến cuối dãy
        for (int i = 1; i <= n; i++) {
            cout << a[i] << ' '; // In ra cấu hình kế tiếp
        }
    }
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i]; 
        }
        /*
         next(); // Tìm và in ra hoán vị tiếp theo
        cout << endl;
        */// để sinh cấu hình kế tiếp 1 -> n
        if (next_permutation(a + 1, a + n + 1)) { 
            for (int i = 1; i <= n; i++) {
                cout << a[i] << ' '; // In ra cấu hình kế tiếp
            }
        } else { // là cấu hình cuối cùng in 1 -> n
            for (int i = 1; i <= n; i++) {
                cout << i << ' ';
            }
        }
        cout << endl;
    }
}
