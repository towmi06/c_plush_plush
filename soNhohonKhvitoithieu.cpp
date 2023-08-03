#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n], d = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= k)
                d++;// d la so luong cac so <= k
        }
        int cnt = 0;
// Đếm số phần tử <=k trong khoảng đầu tiên d
        for (int i = 0; i < d; i++) {
            if (a[i] <= k)
                ++cnt;
        }
        int ans = cnt; // Số lg so <= k max trong khoảng đầu tiên
// Duyệt qua các khoảng có kích thước d
        for (int i = d; i < n; i++) {
// ktra xem ptử đầu trong khoảng htại (phần tử a[i - d]) có <= k hay không. 
// Nếu đúng, tức là ptử đầu trong khoảng cũng <= k,
// ta giảm slg ptử <=k trong khoảng đi 1 đvị
            if (a[i - d] <= k)
                --cnt; // Loại bỏ phần tử đầu khoảng htai
            if (a[i] <= k)
                ++cnt; // Thêm phần tử cuối khoảng htai
// Cập nhật số phần tử <= k lớn nhất                
            ans = max(ans, cnt); 
        }
		// In ra số lần phải thay đổi ít nhất các phần tử
        cout << d - ans << endl; 
    }
}
