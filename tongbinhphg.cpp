#include<iostream>
#include <math.h>

using namespace std;
int main (){
	int n; cin >> n;
	long long s = 0;
	for (int i = 1; i <= n ; i++){
		s += 1ll* i*i; // vi n <= 10^5 nen i cung len den 10^5 vaf 10^5 * 10^5 bi tran nen ep kieu
	}
	cout << s << endl;
	return 0;
}