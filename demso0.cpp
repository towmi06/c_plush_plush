#include<bits/stdc++.h>
using namespace std;
main(){
	int t, n, i; cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		for( i =0; i < n; i++) cin >> a[i];
		int m = lower_bound(a, a+n, 1) - a;
		cout << m << endl;
	}
}
