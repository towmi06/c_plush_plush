#include <bits/stdc++.h>
using namespace std;

string add(string num1, string num2) {
    string res = "";
    int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += num1[i--] - '0';
        if (j >= 0) sum += num2[j--] - '0';
        carry = sum >= 10 ? 1 : 0;
        res.push_back(sum % 10 + '0');
    }
    reverse(res.begin(), res.end()); 
    while (res.size() > 1 && res[0] == '0') res.erase(0, 1); 
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string num1, num2;
        cin >> num1 >> num2;
        cout << add(num1, num2) << endl;
    }
    return 0;
}
