#include<bits/stdc++.h>
using namespace std;

int n, a[10005], cnt, final;

void ktao() {
    cnt = 1;
    a[1] = n;
}

void sinh() {
    int i = cnt;
    while (i >= 1 && a[i] == 1) {
        i--;
    }
    if (i == 0) {
        final = 0; // Đã sinh hết tất cả các dãy con tăng có tổng bằng N
    } else {
        a[i]--;
        int pbu = cnt - i + 1; // Tính tổng số phần tử cần thêm vào dãy con
        cnt = i; // Reset cnt = i để tạo dãy con mới
        int q = pbu / a[i]; // Số lượng dãy con giống nhau
        int r = pbu % a[i]; // Số lượng phần tử dư thừa
        if (q) {
            for (int j = 1; j <= q; j++) {
                cnt++;
                a[cnt] = a[i]; // Thêm dãy con giống nhau vào cuối dãy
            }
        }
        if (r) {
            cnt++;
            a[cnt] = r; // Thêm phần tử dư thừa vào cuối dãy
        }
    }
}

int main() {
    cin >> n;
    ktao(); // Khởi tạo dãy ban đầu
    final = 1;
    while (final) {
        for (int i = 1; i <= cnt; i++) {
            cout << a[i] << ' '; // In ra dãy con
        }
        cout << endl;
        sinh(); // Sinh dãy con tiếp theo
    }
    return 0;
}
