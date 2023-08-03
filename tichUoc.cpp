#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
	long long product = 1;   
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            product *= i;
        }
    }
    cout<< product << endl;

    return 0;
}
