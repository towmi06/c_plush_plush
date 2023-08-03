#include<iostream>

using namespace std;

bool check(long long n){
	while(n){
		long long r = n % 10;// tach tung chu so 
		n /= 10;
		if(r != 0 && r != 6 && r !=8){
			return false;
		} 
	} return true;
}

int main (){
	long long n; cin >> n;
	if(check(n)){
		cout << "1";
	} else{
	 cout << "0";
	}
	return 0;
}
