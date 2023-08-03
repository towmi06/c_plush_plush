#include <iostream>
using namespace std;
string s[1000];

void saunhiphan(string s, int n) {
    if (n == 0) {
        if (s == string(s.rbegin(), s.rend())) {
            cout << s[0];
            for (int i = 1; i < s.length(); i++) {
                cout << " " << s[i];
            }
            cout << endl;
        }
    } else {
    saunhiphan(s + "0", n - 1); 
    saunhiphan(s + "1", n - 1); 
   }
}

int main() {
    int n;
    cin >> n;
    saunhiphan("", n);
    return 0;
}