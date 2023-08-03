#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main (){
	ll n, count = 0; cin >> n;
	for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
			if( i != n/ i)       count +=2;
            else ++count;
            }
		}
		cout << count << endl;
	return 0;
}