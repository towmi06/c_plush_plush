#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        vector<char> b;
        b.push_back(a[5]);
        b.push_back(a[6]);
        b.push_back(a[7]);
        b.push_back(a[9]);
        b.push_back(a[10]);
        int mark = 1;
        for (int i = 0; i < 5; i++) {
            if (b[i] != '6' && b[i] != '8') {
                mark = 0;
                break;
            }
        }
        if (b[0] < b[1] && b[1] < b[2] && b[2] < b[3] && b[3] < b[4])
            cout << "YES" << endl;
        else if (b[0] == b[1] && b[1] == b[2] && b[2] == b[3] && b[3] == b[4])
            cout << "YES" << endl;
        else if (b[0] == b[1] && b[1] == b[2] && b[3] == b[4])
            cout << "YES" << endl;
        else if (mark == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
