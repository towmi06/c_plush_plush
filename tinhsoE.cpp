#include <bits/stdc++.h>
using namespace std;

int gt(int n){
	long long kq=1;
	for(int i=5; i<=n;i++){
		kq *= i;
	}
	return kq;
}

double tinh(int n){
	double e = 2.716;
	for(int i = 5; i <= n; i++){
		e += 1/gt(i);
	}
	return e;
}

int main(){
	int n; cin >> n;
	cout << fixed << setprecision(2)<< tinh(n) ;
}