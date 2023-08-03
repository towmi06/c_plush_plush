#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Hàm kiểm tra tính đối xứng của xâu
bool isSymmetric(const string& s) {
    int n = s.size();
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-i-1]) {
            return false;
        }
    }
    return true;
}

// Hàm sinh tất cả các xâu nhị phân có độ dài chẵn không vượt quá N
void generateBinaryStrings(int n, vector<string>& result) {
    for (int i = 0; i < (1 << n/2); i++) {
        string s(n/2, '0');
        int k = i;
        for (int j = 0; j < n/2; j++) {
            s[j] = '0' + k % 2;
            k /= 2;
        }
        string t = s;
        reverse(t.begin(), t.end());
        result.push_back(s + t);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> result;
        generateBinaryStrings(n, result);
        for (const auto& s : result) {
            if (isSymmetric(s)) {
                cout << s << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
