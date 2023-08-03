#include<iostream>
using namespace std;
// viet ham tinh gthua trar ve long long, co tso int n
long long gt(int n){
	long long kq= 1;
	for(int i=1; i<= n; i++){
		kq*=i;
	}
	return kq;
}

int main(){
	int n; cin >> n;
	cout << gt(n)<< endl;
	return 0;
}