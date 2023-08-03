#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main (){
	int a, b;
	cin >> a >> b;
	int s = a + b;
	int m = a - b;
	long long t = 1ll* a * b;
	cout << s << endl << m << endl << t << endl;
	if (b != 0){
		double th = (double) a/ b;
		cout << fixed << setprecision(4) << th << endl;
	}
	else {
		cout << "INVALID" << endl;
	}
	return 0;
}