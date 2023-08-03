#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> names(n);
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }
    string first;
    cin >> first;

    sort(names.begin(), names.end());

    do {
        if (names[0] == first) {
            for (int i = 0; i < n; i++) {
                cout << names[i] << " ";
            }
            cout << endl;
        }
    } while (next_permutation(names.begin(), names.end()));

    return 0;
}
