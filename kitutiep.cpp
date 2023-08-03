#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;
int main (){
	char c; cin >> c;
	if ( c == 'z' || c== 'Z'){
		cout<<"a\n" ;
	}
	else if(c >='a' && c < 'z'){
		c+=1;
		cout << c << endl;
	}
	else {
		c+= 32;
		c+=1;
		cout << c << endl;
	}
	
	return 0;
}