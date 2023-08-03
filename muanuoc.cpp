#include<iostream>
#include<math.h>

using namespace std;
int main (){
	long long n, a ,b ; cin >> n >> a >> b;
	if(a<= (double)b /2){
		cout << n * a << endl;
	}
	else{
		if(n%2 == 0){
			cout << n/2 * b << endl;
		}
		else {
			cout << (n-1)/2 * b + a;
		}
	}
	return 0;
}