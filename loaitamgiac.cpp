#include <iostream>
#include <math.h>

using namespace std;
int main (){
	int a, b, c; cin >> a >> b >> c;
	if ( a > 0 &&  b > 0 && c > 0 && ( a + b > c && a + c > b && b + c > a)){
		if ( a == b && b== c){
			cout << "1\n"; 
		}
		 else if ( a == b|| a == c || b == c ){
			cout << "2\n";
		}
		 else if (a*a == b*b + c*c|| b*b == a*a + c*c|| c*c == a*a + b*b ){
			cout << "3\n";
		} else cout << "4\n";
	}
	else cout<< "INVALID\n";
	return 0;
}