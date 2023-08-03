#include<bits/stdc++.h>
using namespace std;

int t, n, k, cnt, res, a[10005], final;

// Hàm sinh dãy nhị phân
void sinh() {
	int i = n; 
	while (i >= 1 && a[i] == 1) {
		a[i] = 0; // Đảo bit thành 0
		--i;
	}
	if (i == 0) final = 0; // Khi i == 0, nghĩa là đã sinh tới dãy cuối cùng, kết thúc quá trình sinh
	else a[i] = 1; // Đảo bit tại vị trí i thành 1
}

// Hàm kiểm tra dãy nhị phân có thỏa mãn điều kiện
bool check() {
	cnt = 0;
	res = 0; // Biến đếm số lượng dãy con liên tiếp có k bit 0
	for (int i = 1; i <= n; i++) {
		if (a[i] == 0) cnt++;
		else cnt = 0;
		if (cnt > k) return false; // Nếu số lượng bit 0 liên tiếp vượt quá k, không thỏa mãn điều kiện
		if (cnt == k) ++res; // Đếm số lượng dãy con liên tiếp có k bit 0
	}
	return res == 1; 
}

int main() {
	cin >> t; 
	while (t--) {
		final = 1; 
		cin >> n >> k;
		vector<vector<int>> v;
		for (int i = 1; i <= n; i++) {
			a[i] = 0; 
		}
		while (final) {
			if (check()) {
				vector<int> tmp(a+1, a+n+1);
				v.push_back(tmp); 
				}sinh(); 
			}cout << v. size()<< endl;
			for(auto it : v){
				for( auto m : it){
					if(  m == 1) cout << "B";
					else cout << "A";
				} cout << endl;
			}
	}
	return 0;
}
