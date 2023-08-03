#include <bits/stdc++.h>

using namespace std;
int main(){
	long long n; cin >> n;
	int le=0,chan =0;
	while (n!=0){
		int r = n%10;
		if(r % 2 == 0){
			++chan;
		} else	++le;
		n/=10;
	}
	cout << le << ' '<< chan;
	return 0;
}