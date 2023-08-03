#include <iostream>
#include  <iomanip>
using namespace std;
int main (){
	int n; cin >> n;
	double s = 0;
	for (int i = 1; i <= n; i++){
		s += 1.0000* 1 / i;
	}
	cout << fixed << setprecision (4)<< s ;
	return 0;
}