#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, dem = 0; cin >> n;
	if(n == 0){
		cout << 1<< endl;
	} else{
	while (n!=0){
		++dem;
		n /=10;
	}
	cout << dem ;
	}
	return 0;
}