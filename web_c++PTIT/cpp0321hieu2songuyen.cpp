#include <bits/stdc++.h>
using namespace std;

string tru(string a, string b) {
    int temp = 0;
    string s = "";
    int n = max(a.size(), b.size());
    a = string(n - a.size(), '0') + a;
    b = string(n - b.size(), '0') + b;
    if (a.compare(b) < 0) swap(a, b);
    for (int i = n - 1; i >= 0; i--) {
        temp = a[i] - b[i] - temp;
        s += (temp >= 0) ? temp + '0' : temp + 10 + '0';
        temp = (temp >= 0) ? 0 : 1;
    }
    while (s.size() > 1 && s.back() == '0') s.pop_back();
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        string c = tru(a, b);
        cout << string(max(a.size(), b.size()) - c.size(), '0') << c << endl;
    }
    return 0;
}
