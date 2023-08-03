#include <iostream>

using namespace std;

int main (){
	int n; cin >> n;
	if (( n%2) == 0){
		cout << "YES\n";
	} 
	else {
		cout << "NO\n";
	}
	
	if (((n % 3) == 0) && ((n % 5) == 0)) {
		cout << "YES\n";
	} 
	else {
	cout << "NO\n";
	}
	
	if (((n % 3) == 0) && (( n % 7) != 0)){
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	
	if ((n % 3 == 0 ) || (n % 7 == 0)) {
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	} 
	
	if (( n > 30) && ( n < 50)){
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	
	if ((n >= 30) && ((n % 2 == 0) || (n % 3 == 0) || ( n % 5 ==0))){
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	
	int r = n % 10;
	if ((n >= 10) && (n <= 99) && (r == 2 || r == 5 || r == 7)){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	
	if (( n <= 100) && n % 23 == 0){
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	
	if ( n < 10 || n > 20 ){
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	
	if ( r % 3 == 0){
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}