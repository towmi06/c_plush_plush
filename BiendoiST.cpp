#include<bits/stdc++.h>
using namespace std;

// SO BUOC BIEN DOI MIN DE CHYTEN S -> T
// BFS
int solve(int s, int t) {
    queue<pair<int, int>> q;
    set<int> se; se.insert(s);
    q.push({s, 0}); // 0 là số bước di chuyển ban đầu
    while (!q.empty()) {
        pair<int, int> top = q.front();
        q.pop();
        int k = top.first; int l = top.second;
// Đạt được trạng thái cần tìm, trả về số bước di chuyển        
        if (k == t) return l; 
// Có thể chuyển đổi bằng cách nhân đôi hoặc giảm đi 1        
        if (k * 2 == t || k - 1 == t) return l + 1; 
// Kiểm tra trạng thái nhân đôi        
        if (se.find(k * 2) == se.end() && k < t) { 
            q.push({k * 2, l + 1});
            se.insert(k * 2);
        }
// Kiểm tra trạng thái giảm đi 1        
        if (se.find(k - 1) == se.end() && k > 1) { 
            q.push({k - 1, l + 1});
            se.insert(k - 1);
        }
    }
// Không thể chuyển đổi thành trạng thái cần tìm    
    return -1; 
}

int main() {
    int m;
    cin >> m;
    while (m--) {
        int s, t;
        cin >> s >> t;
        cout << solve(s, t) << endl; 
    }
    return 0;
}
