#include <bits/stdc++.h>
using namespace std;

int main (){
	long long m , n; cin >> m >> n;
	if (n % 2 == 0){
		cout << n / 2 * m ;
	} else {
		cout << (n - 1)/ 2 * m + m/2 ;
	}
	return 0;
}