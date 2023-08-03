#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];
    int d = 1; // Giá trị đầu tiên của phần tử
    int vong = 0; // Biến vòng lặp

    while (d <= n * n) {
        // Điền hàng từ trái sang phải
        for (int j = vong; j <= n - 1 - vong; j++) {
            a[vong][j] = d++;
        }

        // Điền cột từ trên xuống dưới
        for (int i = vong + 1; i <= n - 1 - vong; i++) {
            a[i][n - 1 - vong] = d++;
        }

        // Điền hàng từ phải sang trái
        for (int j = n - 2 - vong; j >= vong; j--) {
            a[n - 1 - vong][j] = d++;
        }

        // Điền cột từ dưới lên trên
        for (int i = n - 2 - vong; i >= vong + 1; i--) {
            a[i][vong] = d++;
        }

        // Tăng biến vòng lặp
        vong++;
    }

    // In ra ma trận xoắn ốc
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
