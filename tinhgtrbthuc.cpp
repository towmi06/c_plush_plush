#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	long long S =  1ll * a * (b+c) + 1ll * b * (a+c);
	cout << S <<endl;
	return 0;
}