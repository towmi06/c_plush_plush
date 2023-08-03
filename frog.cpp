#include <iostream>

using namespace std;
int main (){
	int a, b, k; cin >> a >> b >> k;
	if (k % 2 == 0){
		cout <<1ll* k/2 * (a-b) << endl;
	} else cout << 1ll* ((k+1)/2) * a - 1ll*((k+1)/2 - 1) *b <<endl;
	return 0;	
}