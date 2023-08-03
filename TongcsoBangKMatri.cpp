#include <bits/stdc++.h>
using namespace std;

int n, k, sum, cnt, m[10005][10005];
int a[1000];

int main() {
    cin >> n >> k;
    // Nhập ma trận m
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> m[i][j];
        }
    }
    // Khởi tạo cấu hình ban đầu
    for (int i = 1; i <= n; i++) {
        a[i] = i; // Hàng i đứng tại cột a[i]
    }
    // Lưu các cấu hình thỏa mãn vào vector v
    vector<vector<int>> v;
    do {
        sum = 0;
        vector<int>tmp;
        for (int i = 1; i <= n; i++) {
        	// Tính tổng các phần tử tương ứng trong ma trận m
            sum += m[i][a[i]]; 
            tmp.push_back(a[i]);
        }
        if (sum == k) {
            vector<int> tmp(a + 1, a + n + 1);
        }
    } while (next_permutation(a + 1, a + n + 1));
    // In ra số lượng cấu hình thỏa mãn và từng cấu hình trong vector v
    cout << v.size() << endl;
    for (auto it : v) {
        for (auto c : it) {
            cout << c << ' ';
        }
        cout << endl;
    }
}
