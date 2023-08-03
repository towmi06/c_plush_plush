#include<bits/stdc++.h>
using namespace std;

int n, m, cnt = 0;
// Khởi tạo map để lưu trữ số lần duyệt của từng giá trị đỉnh
map<int, vector<int>> mp; 
int a[1000][1000];

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1}; // Mảng dx và dy lưu trữ các hướng di chuyển
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1}; 

void loang(int i, int j, int x) {
    ++cnt; // Tăng biến đếm lên 1, số lượng ô duyệt được trong một đường đi
    a[i][j] = 0; // Đánh dấu ô đã được duyệt bằng cách gán giá trị 0 cho ô đó
    for (int k = 0; k < 8; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == x) {
            loang(i1, j1, x); 
        }
    }
}

int main() {
    cin >> n >> m; 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j]; 
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] != 0) { // Nếu ô chưa được duyệt (khác 0)
                int tmp = a[i][j]; // Lưu giá trị đỉnh cần duyệt vào biến tạm tmp
                cnt = 0; // Reset biến đếm về 0
                loang(i, j, tmp); // Thực hiện duyệt đường đi từ ô hiện tại
 // Lưu slg ô duyệt được vào vector tương ứng với gtrị đỉnh tmp trong  mp
                mp[tmp].push_back(cnt); 
/*
 mp[tmp] trả về vector tương ứng với khóa tmp trong map mp. 
 Chúng ta sử dụng push_back(cnt) để thêm giá trị cnt vào cuối vector đó.

Ví dụ: Nếu tmp = 1 và cnt = 3, 
thì mp[1].push_back(3) sẽ thêm giá trị 3 vào vector tương ứng 
với khóa 1 trong map mp.

*/
            }
        }
    }

    for (auto it : mp) {
        sort(it.second.begin(), it.second.end()); // Sắp xếp các số lượng ô duyệt được tăng dần
        cout << it.first << " : ";

        for (int x : it.second) {
            cout << x << ' '; // In ra số lượng ô duyệt được tương ứng với giá trị đỉnh
        }

        cout << endl;
    }

    return 0;
}
