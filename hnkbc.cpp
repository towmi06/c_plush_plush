#include <bits/stdc++.h>
using namespace std;

void lietKeHoanVi(int n, vector<int> &permutation, vector<bool> &used, int &count) {
    if (permutation.size() == n) {
        count++;
        cout << count << ": ";
        for (int i = 0; i < n; i++) {
            cout << permutation[i] << " ";
        }
        cout << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            if (!used[i-1]) {
                permutation.push_back(i);
                used[i-1] = true;
                lietKeHoanVi(n, permutation, used, count);
                used[i-1] = false;
                permutation.pop_back();
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> permutation;
    vector<bool> used(n, false);
    int count = 0;

    lietKeHoanVi(n, permutation, used, count);

    return 0;
}
