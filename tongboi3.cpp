#include <iostream>
#include <math.h>

using namespace std;
int main (){
	int n; cin >> n;
	long long s = 0;
	for( long long i=3; i <= n; i+=3){	
		s += i;
	}               
	cout << s << endl;
	return 0;
}