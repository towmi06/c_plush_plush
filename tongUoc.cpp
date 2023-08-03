#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
	long long sum = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i != sqrt(n)) {
                sum += n/i + i;
            } else{
            	sum +=i;
			}
        }
    }
    cout << sum  << endl;
    return 0;
}
