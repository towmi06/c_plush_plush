#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<string> names(n);
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    int count = 0;
    unordered_map<string, int> name_count;

    for (int i = 0; i < k; i++) {
        name_count[names[i]]++;
    }

    for (int i = k; i < n; i++) {
        string curr_name = names[i];
        for (int j = i - k; j < i; j++) {
            if (names[j].length() == curr_name.length()) {
                count += name_count[names[j]];
            }
        }
        name_count[names[i - k]]--;
        name_count[names[i]]++;
    }

    cout << count << endl;

    return 0;
}
