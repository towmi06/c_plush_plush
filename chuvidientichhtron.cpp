#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int R;
	cin >> R;
	float chuvi = 2 * PI * R;
	float dientich = PI * R * R;
	cout << fixed << setprecision(4) << chuvi << " " << dientich;
	return 0;
}