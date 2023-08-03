#include<iostream>
 // 1 + 2 + 3 + 4+...n
using namespace std;
int main (){
	int n; cin >> n;
	long long sum = 0;
	for (int i = 1; i <= n; i++){
		sum += i;
	}
	cout << sum << endl;
	return 0;
}