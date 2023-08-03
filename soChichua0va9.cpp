#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> kq; // Lưu trữ các số thỏa mãn
ll ans[101]; // Lưu trữ kết quả cho từng số

void init() {
    queue<string> q;
    q.push("9"); 
    kq.push_back(9); 
    while (1) {
        string top = q.front(); // Lấy phần tử đầu tiên trong hàng đợi
        q.pop(); // Xóa phần tử đầu tiên trong hàng đợi
        if (top.size() == 11) break; // Đạt đến số lượng cần tìm, thoát khỏi vòng lặp
        kq.push_back(stoll(top + "0")); // Thêm số 0 vào phần tử đầu tiên đã lấy ra
        kq.push_back(stoll(top + "9")); // Thêm số 9 vào phần tử đầu tiên đã lấy ra
        q.push(top + "0"); // Thêm số 0 vào hàng đợi
        q.push(top + "9"); // Thêm số 9 vào hàng đợi
    }
    for (int i = 1; i <= 100; i++) {
        for (ll x : kq) {
            if (x % i == 0) {
                ans[i] = x;
                break;
            }
        }
    }
}

int main() {
    init(); // Khởi tạo kết quả
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        cout << ans[n] << endl;
    }
}
