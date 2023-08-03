#include<bits/stdc++.h>
using namespace std;

string chdvan(const string& para) {
    string bdoi;
    bool dauCau = true;

    for (char c : para) {
        if (isspace(c)) {
            if (!bdoi.empty() && !isspace(bdoi.back())) {
                bdoi.push_back(' ');
            }
        } else if (isalpha(c)) {
            if (dauCau) {
                bdoi.push_back(toupper(c));
                dauCau = false;
            } else {
                bdoi.push_back(tolower(c));
            }
        } else if (ispunct(c)) {
            bdoi.push_back(c);
            dauCau = true;
            if (c == '.' || c == '!' || c == '?') {
                bdoi.push_back('\n');
            }
        }
    }

    if (bdoi.back() != '.' && bdoi.back() != '!' && bdoi.back() != '?') {
        bdoi.push_back('.');
    }

    return bdoi;
}

int main() {
    string s;
    getline(cin, s);
    string chuanHoa = chdvan(s);
    cout  << chuanHoa << endl;

    return 0;
}
