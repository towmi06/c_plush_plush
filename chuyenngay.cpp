#include <iostream>
#include <math.h>

using namespace std;
int main (){
	int n; cin >> n;
	int y = n / 365;
	int w = (n % 365) / 7;
	int d = (n % 365) % 7;
	cout << y << ' ' << w << ' '<< d <<endl;
	return 0;
}