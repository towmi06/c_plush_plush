#include<bits/stdc++.h>
using namespace std;
// de ax + by = n  x, y  nguyen va x min = 0 va x max khi y = 0=> x = n / a;
int main(){
	int a, b, n; cin >> a>> b>> n;
	for(int x = 0; x <= n/a; x++){
		int tmp = n - a *x;
		if(tmp % b == 0){
			cout << "YES";
			return 0;
		}
   }
   cout << "NO";	
	return 0;
}