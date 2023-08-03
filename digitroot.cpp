#include<bits/stdc++.h>
// vd 99887 = cong tong cac so= 41= 4 + 1 = 5 cho den khi 1 chs
using namespace std;
int main (){
	long long n; cin >> n;
	while(n >=10){// tinh tong cso cua m va gan lai cho chinh no
		int sum =0;
		while(n!= 0){
			sum += n %10;
			n/=10;
		}// n = 0
		n = sum;
	}
	cout << n;
	return 0;
}