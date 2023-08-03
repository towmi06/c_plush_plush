#include <iostream>
#include <string>

using namespace std;

string fib[46];

void precompute_fibonacci_strings() {
    fib[0] = "A";
    fib[1] = "B";
    for (int i = 2; i <= 45; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

int count_bs_in_prefix(string s, int k) {
    int count = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'B') {
            count++;
        }
    }
    return count;
}

int main() {
    // precompute Fibonacci strings
    precompute_fibonacci_strings();

    // read number of test cases
    int t;
    cin >> t;

    // process each test case
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s = fib[n];
        int count = count_bs_in_prefix(s, k);
        cout << count << endl;
    }

    return 0;
}
