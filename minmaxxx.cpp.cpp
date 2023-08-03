#include <iostream>
using namespace std;


// dể tạo ra 1 số thì tạo bởi các chữ số từ 0 - > 9 
int main() {
    long long n; cin >> n;
    int Min = 9, Max = 0;
    if (n == 0) {
    	Min = 0;
	}
    while (n > 0) {
        int k = n % 10;
        Min = min(Min , k);
        Max = max(Max , k);
        n /= 10; // loại bỏ chữ số cuối cùng của k
    }
    cout <<  Max << ' '<< Min << endl;
    return 0;
}