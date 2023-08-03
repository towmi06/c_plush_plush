#include<bits/stdc++.h>
using namespace std;

int n, k;
long long sum = 0, res, idx = 0, a[100001];
// idx để lưu chỉ số đầu tiên của cửa sổ
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];
// Tính tổng của k phần tử đầu tiên
        for (int i = 0; i < k; i++)
            sum += a[i];
        res = sum; // res lưu tổng lớn nhất ban đầu
// Tính tổng cho các cửa sổ tiếp theo bằng cách cộng thêm phần tử mới và trừ đi phần tử cũ
        for (int i = k; i < n; i++) {
            sum = sum - a[i - k] + a[i]; // Trừ đi phần tử đầu cửa sổ cũ và cộng thêm phần tử mới
            if (sum > res) {
                res = sum; // Nếu tổng mới lớn hơn tổng lớn nhất đã tìm thấy, cập nhật tổng lớn nhất
                idx = i - k + 1; // Lưu lại chỉ số bắt đầu của cửa sổ có tổng lớn nhất
            }
        }
        // In ra tổng lớn nhất và các phần tử trong cửa sổ có tổng lớn nhất
        cout << res << endl;
        for (int j = 0; j < k; j++)
            cout << a[idx] + j << ' ';
        cout << endl;
    }
    return 0;
}
