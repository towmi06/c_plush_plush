#include <bits/stdc++.h>
using namespace std;

int t, n, k, a[10005], ok;

void sinh() {
    int i = n;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        --i;
    }// Nếu đã sinh đến cấu hình cuối cùng, dừng vòng lặp
    if (i == 0) ok = 0; 
    else a[i] = 1; // Đổi giá trị ký tự tại vị trí i từ 0 thành 1
}

bool check() {
// Kiểm tra điều kiện ký tự đầu tiên và cuối cùng
    if (a[1] == 0 || a[n] == 1) return 0; 
    for (int i = 1; i < n; i++) {
	 // Kiểm tra hai ký tự liên tiếp
        if (a[i] == 1 && a[i + 1] == 1) return false;
    }
    return true;
}

int main() {
    cin >> t; 
    while (t--) {
        cin >> n; // lg ki tu 
        for (int i = 1; i <= n; i++) {
            a[i] = 0; // Khởi tạo cấu hình ban đầu với toàn bộ ký tự là "A"
        }
        ok = 1; // Đánh dấu biến kiểm tra để tiếp tục sinh cấu hình
        while (ok) {
            if (check()) { // Nếu cấu hình thỏa mãn điều kiện
                for (int i = 1; i <= n; i++) {
                    if (a[i] == 0) cout << "A";
                    else cout << "H";
                }
                cout << endl; // In ra cấu hình
            }
            sinh(); // Sinh cấu hình tiếp theo
        }
    }
}
