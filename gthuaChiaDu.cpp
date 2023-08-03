#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1e9 + 7;
ll GT[1000001];

void gt() {
    GT[0] = 1;
    for(int i = 1; i <= 1000000; i++) {
        GT[i] = (GT[i - 1] * i) % Mod;
    }
}

int main() {
    gt();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << GT[n] << endl;
    }
    return 0;
}
