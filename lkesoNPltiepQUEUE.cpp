#include<bits/stdc++.h>
using namespace std;

vector<string> res; // Lưu trữ chuỗi kết quả
int cnt = 1;

void init() {
    queue<string> q;
    q.push("1"); // Thêm chuỗi "1" vào hàng đợi
    res.push_back("1"); // Thêm chuỗi "1" vào kết quả
    while (res.size() < 10000) { // Lặp cho đến khi có đủ 10000 chuỗi trong kết quả
        string top = q.front(); // Lấy phần tử đầu tiên trong hàng đợi
        q.pop(); // Xóa phần tử đầu tiên trong hàng đợi
        res.push_back(top + "0"); // Thêm chuỗi "0" vào phần tử đầu tiên đã lấy ra
        res.push_back(top + "1"); // Thêm chuỗi "1" vào phần tử đầu tiên đã lấy ra
        q.push(top + "0"); // Thêm chuỗi "0" vào hàng đợi
        q.push(top + "1"); // Thêm chuỗi "1" vào hàng đợi
    }
}

int main() {
    init(); // Khởi tạo kết quả
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << res[i] << ' '; // In ra n chuỗi đầu tiên trong kết quả
        }
        cout << endl;
    }
    return 0;
}
