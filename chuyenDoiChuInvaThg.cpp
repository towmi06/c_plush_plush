#include <iostream>

using namespace std;
int main (){
	char c; cin >> c;
	if ( c >= 'a' && c <= 'z' ){
		c -= 32;
		cout << c;
	} else 
	if (c >= 'A' && c <= 'Z'){
		c += 32;
		cout << c;
	} else cout << c;
	return 0;
}