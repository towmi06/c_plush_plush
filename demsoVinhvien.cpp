#include <bits/stdc++.h>
using namespace std;
// Cho phep ng dung nhap vao khong ghan cac so tu nhien va tinh tong cac so do 
// cac so duoc nhap nhung neu nhap so 0 thi break
// input : 1 2 3 1 2 3 1 2 3 0
// Outout : 24
int main (){
	int sum =0;
	while(true){
		int n; cin >> n;
		if(n ==0){
			break;
		}
		sum +=n;
	}
	cout << sum << endl;
	return 0;
}