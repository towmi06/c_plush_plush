#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, b; cin >> n >> k >> b; // Nhập vào số đèn n, số đèn hỏng b, số đèn liên tiếp hoạt động k
	int a[100001] = {0};// Đặt tất cả phần tử của mảng a bằng 0
	for(int i = 0; i < b; i++){
		int x; cin >> x;
		a[x] = 1; // Đánh dấu đèn x bị hỏng (gán giá trị 1 tại vị trí x của mảng a)
	}
	int cnt = 0;
	for(int i = 1; i <= k; i++){
		if(a[i] == 1) ++cnt; // Đếm số đèn hỏng trong khoảng từ 1 đến k
	}
	int ans = cnt;
	for(int i = k + 1; i <=n; i++){
		cnt = cnt - a[i - k] + a[i]; // Cập nhật số đèn hỏng trong cửa sổ trượt
		ans = min(ans, cnt); // Cập nhật giá trị nhỏ nhất của số đèn hỏng trong khoảng k
	}
	cout <<ans << endl; 
}
