#include<bits/stdc++.h>
using namespace std;
using ll = long long;
//tìm min va max có m chữ số và tổng chữ số bằng s
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, s;cin >> m >> s;
    // Kiểm tra nếu s không thỏa mãn điều kiện
    if ((s > 9 * m) || (s == 0 && m >= 2)) {
        cout << "NOT FOUND\n";
    }
    else {
        int x[m], y[m];
        int t = s;
        // Tạo số có m chữ số với tổng s
        for (int i = 0; i < m; i++) {
            if (s >= 9) {
                x[i] = 9;
                s -= 9;
            } else {
                x[i] = s;
                s = 0;
            }
        }
        // Tạo số y có tổng t với m-1 chữ số
        --t; // để dành 1 đơn vị cho chữ số đầu tiên
        for (int i = m - 1; i >= 1; i--) {
            if (t >= 9) {
                y[i] = 9;
                t -= 9;
            } else {
                y[i] = t;
                t = 0;
            }
        }
        y[0] = t + 1; // chữ số đầu tiên
        // In số y và x ra màn hình
        for (int i = 0; i < m; i++) {
            cout << y[i];
        }
        cout << endl;
        for (int i = 0; i < m; i++) {
            cout << x[i];
        }
        cout << endl;
    }
}
