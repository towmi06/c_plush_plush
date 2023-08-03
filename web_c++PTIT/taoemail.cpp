#include <iostream>
#include <sstream>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp, email;
    char c;
    vector<string> b;
    
    while (ss >> tmp) {
        for (int i = 0; i < tmp.size(); i++) {
            c = tolower(tmp[i]);
            tmp[i] = c;
        }
        b.push_back(tmp);
    }
    
    string n;
    for (int i = 0; i < b.size() - 1; i++) {
        n += b[i].substr(0, 1);
    }
    email = b[b.size()-1] + n;
    
    cout << email << "@ptit.edu.vn";
    
    return 0;
}

