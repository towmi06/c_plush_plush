#include<iostream>
#include<math.h>
using namespace std;
long long sum(long long n){
	long long kq=0;
	for(int i = 1; i<= sqrt(n); i++){
		if(n%i == 0){
			kq +=i;
			if(i!= n /i)	kq += n/i;
		}
	}
	return kq;
}

int main(){
	long long n; cin >> n;
	cout << sum(n) << endl;
	return 0;
}