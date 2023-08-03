#include<iostream>
#include<math.h>

using namespace std;

/* tinh toi da n = 20
long long gt(int n){
	long long kq = 1;
	for(int i = 1; i <= n; i++){
		kq *= i;
	}
	return kq;
}
long long tohop(int n , int k){
	return gt(n)/(gt(k) * gt(n-k));
	
}
int main(){
	int n, k; cin >> n >> k;
	cout << tohop(n, k);
	return 0;
}*/
// tinh n cao hon- day cx la cach ve tam giac pascal
long long tohop2(int n, int k){
	long long kq = 1;
	for(int i; i<= k; i++){
		kq *= (n-i+1);
		kq /= i;
	}
	return kq;
}

int main(){
	int n; cin >> n;
	for(int i = 1; i<= n; i++){
		for(int j = 1; j<= i; i++){
			cout<< tohop2(i,j)<< " ";
		}
		cout << endl;
	}
	return 0;
}