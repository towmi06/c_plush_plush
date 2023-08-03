#include <bits/stdc++.h>
using namespace std;

bool nto(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return n>1;
}

bool sodep(string s) {
    int sum = 0;
    for (char c : s) {
        int n = c - '0';
        if (!nto(n)) return false;
        sum += n;
    }
    return nto(sum);
}

int main() {
    string s;cin >> s;
    if (sodep(s)) cout << "YES";
    else cout << "NO";
}