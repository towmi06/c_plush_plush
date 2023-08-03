#include<bits/stdc++.h>

using namespace std;

//tinh n ^m chia du cho 10 = ?
//1 < = n, m <= 10^6;
// k nen dung pow vi tran , va pow tra ve so thuc nen k % 
int main(){
	int n, m; cin >> n >> m;
	long long res = 1;
	for(int i= 1; i<= m; i ++){
		res*= n;
		res %=10;
	}
	cout << res << endl;
	return 0;
}