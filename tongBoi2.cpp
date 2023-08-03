#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	long long  sum = 0;
	for(int i = 1; i <= n; i++){
		sum += 2*i;// neu tong le thi 2*n-1
	}
	cout <<sum;
	return 0;
}
