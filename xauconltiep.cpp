#include <iostream>
using namespace std;

/**/
string longest(string s) {
    int n = s.length();
    int max_len = 1, start = 0, cur_len = 1, max_start = 0;   
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            cur_len++;
        } else {
            if (cur_len > max_len) {
                max_len = cur_len;
                max_start = start;
            } else if (cur_len == max_len && s.substr(start, cur_len) > s.substr(max_start, max_len)) {
                // Trường hợp có cùng độ dài, chọn xâu có thứ tự từ điển lớn nhất
                max_start = start;
            }
            start = i;
            cur_len = 1;
        }
    }
    if (cur_len > max_len) max_start = start;
    return s.substr(max_start, max_len);
}

int main() {
    string s;
    cin >> s;
    string l = longest(s);
    cout << l << endl;
    return 0;
}
