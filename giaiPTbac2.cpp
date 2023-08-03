#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c; cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "VO SO NGHIEM";
            } else { // c khac 0
                cout << "VO NGHIEM";
            }
        } else  if (c==0) {// b khác 0 thì chuyển về PT bậc nhất
        	double x = 0;
            cout << fixed << setprecision(2)<< x<<endl;
        } else {
        	double x =(-c )/ b;
            cout << fixed << setprecision(2) << x;
		}
        
    } else {// a khác 0 nên đây la pt bậc 2
        double delta =  b * b - 4 * a * c;
        if (delta < 0) {
            cout << "VO NGHIEM";
        } else if (delta == 0) {
            double x =  (-b) / (2 * a);
            cout << fixed << setprecision(2) << x;
        } else {// delta >0
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);

            cout << fixed << setprecision(2) << x1 << " " << x2;
        }
    }

    return 0;
}


