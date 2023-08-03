#include <bits/stdc++.h>
using namespace std;

int a[100], ans[100];
bool timThay;
set<int> st;
// Hàm sinh tổ hợp kế tiếp
void sinh(int n, int k) {
	int j = 0;
	for (int i = k; i >= 1; i--) {
		if (a[i] != n - k + i) {
			j = i;
			break;
		}
	}
	if (j == 0) {
		timThay = false; // Không tìm thấy tổ hợp kế tiếp
	}
	else {
		// Sao chép phần tử từ a sang ans cho đến vị trí j
		for (int i = 1; i < j; i++) {
			ans[i] = a[i];
		}
		// Tăng giá trị của ans[j] lên 1
		ans[j] = a[j] + 1;
		// Đặt các phần tử còn lại của ans là các giá trị tăng dần từ ans[j] + 1
		for (int i = j + 1; i <= k; i++) {
			ans[i] = ans[i - 1] + 1;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		timThay = true; // Đánh dấu tổ hợp kế tiếp được tìm thấy mac dinh 
		for (int i = 1; i <= k; i++) {
			cin >> a[i];
		}
		int cnt = 0;
		sinh(n, k);
		if (!timThay) {
			cnt = k; // Không tìm thấy tổ hợp kế tiếp, đếm tất cả các phần tử là khác nhau
		}
		else {
			for (int i = 1; i <= k; i++) {
				st.insert(a[i]);
				st.insert(ans[i]);
			}
			cnt = st.size() - k; // Đếm số lượng phần tử khác nhau
		}
		cout << cnt << endl;
	}
}
