#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long sum = 0;
    while(n) {
        int digit = n % 10;
        if(digit % 2 == 0) {
            sum += digit;
        }
        n /= 10;
    }
    
    cout << sum << endl;
    return 0;
}
