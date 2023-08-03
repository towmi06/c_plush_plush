#include <iostream>
#include <vector>
using namespace std;

struct word {
    string data;
    int fre; // số lần xuất hiện
};

int main() {
    string s;
    int maxn = 0;
    vector<word> v;
    string kq = "";
    while (cin >> s) {
        bool oke = false;
        for (int i = 0; i < v.size(); i++) {
            if (v[i].data == s) {
                v[i].fre++;
                maxn = max(maxn , v[i].fre);
                oke = true;
                break;
            }
        }
        if (!oke) v.push_back({s, 1});
    }
    for (word x : v) {
        if  (x.fre == maxn){
         kq = x.data;
            break;
        }
    }
    for (word x : v) {
        if  (x.fre == maxn && x.data < kq) 
            kq = x.data;
    }
    cout << kq;
}
