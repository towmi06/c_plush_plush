#include <iostream>
#include <string>
using namespace std;

bool isSumString(string S) {
    int n = S.length();
    for (int k = 2; k <= n; k++) {
        bool valid = true;
        for (int i = 2; i < k; i++) {
            int num1 = stoi(S.substr(i - 2, i));
            int num2 = stoi(S.substr(i, i));
            int num3 = stoi(S.substr(i + 2,i));
            if (num1 + num2 != num3) {
                valid = false;
                break;
            }
        }
        if (valid) {
            return true;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        if (isSumString(S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
