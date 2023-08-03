#include<iostream>

using namespace std;
int main (){
	int a, b;
	cin >> a >> b;
	cout << a / b * b << endl;
	if( a % b == 0){
		cout << a << endl;
	}
	else {
		cout << ( a + b - 1)/b * b << endl;
	}
	return 0;
}