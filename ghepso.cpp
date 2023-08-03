#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}

string sxep(vector<string>& k) {
    sort(k.begin(), k.end(), cmp);
    string maxn;
    for (string c : k) {
        maxn += c;
    }
    return maxn;
}

int main() {
    string s; getline(cin, s);
    vector<string> k;
    string htai;
    // duyet qua tung ki tu trg xa 
    for (char c : s) {
        if (isdigit(c)) {
            htai += c;
        } else {
            if (!htai.empty()) {
                // loại bỏ 0 ở đầu
                while (htai.size() > 1 && htai[0] == '0') {
                    htai.erase(0, 1);
                }
                // them vào 
                k.push_back(htai);
                htai.clear(); // de tach so tiếp theo
            }
        }
    }
    // ktra xem xau mơi có khác rỗng k và tiếp tục loại bỏ
    if (!htai.empty()) {
        while (htai.size() > 1 && htai[0] == '0') {
           htai.erase(0, 1);
        }
        k.push_back(htai);
    }
    string res =sxep(k);
    cout << res << endl;
    return 0;
}