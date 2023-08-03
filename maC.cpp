#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "VO SO NGHIEM";
            } else {
                cout << "VO NGHIEM";
            }
        } else {
            double x = 1.00*(-c )/ b;
            cout << fixed << setprecision(2) << x;
        }
    } else {
        double delta =  1.00*b * b - 4 * a * c;
        if (delta < 0) {
            cout << "VO NGHIEM";
        } else if (delta == 0) {
            double x = 1.00* (-b) / (2 * a);
            cout << fixed << setprecision(2) << x;
        } else {
            double x1 = 1.00*(-b - sqrt(delta)) / (2 * a);
            double x2 = 1.00*(-b + sqrt(delta)) / (2 * a);
            if (x1 > x2) {
                swap(x1, x2);
            }
            cout << fixed << setprecision(2) << x1 << " " << x2;
        }
    }

    return 0;
}


