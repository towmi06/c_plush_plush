#include <bits/stdc++.h>

using namespace std;
int main(){
	int n, m; cin >> n >> m;
	int min, max =n;
	
	if (n % 2== 0){
		min = n/2;
	} else  min = n/2 + 1;
	int res=(min + m - 1)/m * m;
	if(res <= max){
		cout << res;
	} else cout <<"-1";
	return 0;
}