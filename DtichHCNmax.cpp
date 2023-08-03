#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;cin >> n;int a[n];
	for (int &x : a)cin >> x;
	stack<int> st;
	int res = INT_MIN; // Lưu diện tích lớn nhất
	int i = 0;
	while (i < n) {
		if (st.empty() || a[i] >= a[st.top()]) { // Nếu stack không rỗng hoac độ cao của cột hiện tại lớn hơn độ cao của cột đang xét trong stack
			st.push(i); // Đưa chỉ số của cột vào stack
			++i; // Tăng chỉ số cột
		}
		else {
			// Tìm cột nào là cột cần nằm bên trái
			// Thấp hơn cột hiện tại nằm bên phải
			int idx = st.top(); // Lấy chỉ số cột đang xét trong stack
			st.pop(); // Xóa cột đang xét trong stack
			// Tính toán diện tích hình chữ nhật tạo bởi cột hiện tại, trong đó cột hiện tại được coi là cột có độ cao nhỏ nhất
			if (st.empty()) { // Nếu stack rỗng tức là chỉ có một cột trong dãy
				res = max(res, i * a[idx]); // Diện tích là chiều rộng (i) nhân với độ cao của cột đang xét
			}
			else { // Ngược lại, nếu còn cột trong stack
				res = max(res, a[idx] * (i - st.top() - 1)); // Diện tích là độ cao của cột nhỏ nhất trong hình chữ nhật nhân với khoảng cách giữa cột hiện tại và cột trên đỉnh stack
			}
		}
	}
	// Xử lý các cột còn lại trong stack
	while (!st.empty()) {
		int idx = st.top();
		st.pop();
		if (st.empty()) { 
			res = max(res, i * a[idx]);
		}
		else {
			res = max(res, a[idx] * (i - st.top() - 1)); 
		}
	}
	cout << res; // In ra diện tích lớn nhất
	return 0;
}
