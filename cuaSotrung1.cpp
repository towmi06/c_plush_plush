#include<bits/stdc++.h>
using namespace std;

int t, n, k, cnt, a[1000001];
set<int> se; // lưu trữ các phần tử xuất hiện trong dãy con.

// Hàm kiểm tra xem có tồn tại dãy con gồm k phần tử trùng nhau không.
bool solve(){
    for(int i = 0; i < k; i++){
        if(se.count(a[i])) return true; //  a[i] đã tồn tại trg tập hợp
        se.insert(a[i]); // neu chua  Thêm a[i] vào tập hợp.
    }
    for(int i = k; i < n; i++){
        se.erase(a[i - k]); // Xóa a[i-k] : ptu htai khỏi tập hợp để giảm kích thước cửa sổ trượt.
        if(se.count(a[i])) return true; 
        se.insert(a[i]);
    }
    return false; // Nếu không tìm thấy dãy con trùng nhau, trả về false.
}

int main(){
    cin >> t;
    while(t--){
        cin >> n >> k; 
        for(int i = 0; i < n; i++) cin >> a[i]; 
        if(solve()) cout << "YES" << endl; 
        else cout << "NO" << endl;
    }
}
