#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;

    int sum = 0;
    for (char c : N) {
        int digit = c - '0';  // Chuyển ký tự thành số nguyên
        sum += digit;
    }

    cout << sum << endl;

    return 0;
}
