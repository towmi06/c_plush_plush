#include <iostream>
#include <iomanip>

using namespace std;
int main (){
    int R;
    cin >> R;
    double chuvi = 2 * 3.14 * R;
    double dientich = 3.14 * R * R;
    cout << fixed << setprecision(4) << chuvi <<' '<< fixed << setprecision(4) << dientich;
    return 0;
}