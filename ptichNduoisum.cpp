#include<bits/stdc++.h>
using namespace std;
int n, t, a[100005], final, cnt;

void ktao(){
	cnt = 1;
	a[1] = n; // Khởi tạo một dãy gồm một phần tử duy nhất là n
}

void sinh(){
	int i = cnt;
	while(i >= 1 && a[i] == 1){
		--i;
	}
	if(i == 0) final = 0; // Không thể sinh tiếp dãy con nào khác được, kết thúc vòng lặp
	else {
		int d = cnt - i + 1; // Tính số phần tử cần thêm vào dãy con
		a[i]--; // Giảm giá trị của a[i] đi 1 để tạo dãy con mới
		int q = d / a[i]; // Số lượng dãy con giống nhau
		int r = d % a[i]; // Số lượng phần tử dư thừa
		if(q){
			for(int  j = 1; j <= q; j++){
				a[++cnt] = a[i]; // Thêm dãy con giống nhau vào cuối dãy
			}
		}
		if(r){
			a[++cnt] = r; // Thêm phần tử dư thừa vào cuối dãy
		}
	}
}

int main(){
	cin >> t; // Đọc số lượng bộ test
	while(t--){
		cin >> n; // Đọc giá trị n
		final = 1; // Biến final = 1 để tiếp tục vòng lặp
		ktao(); // Khởi tạo dãy ban đầu
		while(final){
			cout << '(';
			for(int i = 1; i <= cnt; i++){
				cout << a[i]; // In ra từng phần tử trong dãy con
				if(i == cnt){
					cout << ')'; // Phần tử cuối cùng của dãy con
				} else {
					cout << ' '; // Phân tách giữa các phần tử trong dãy con
				}
			}
			sinh(); // Sinh dãy con tiếp theo
		}
	}
}
