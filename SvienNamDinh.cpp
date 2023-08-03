#include <bits/stdc++.h>
using namespace std;

struct svien {
    string ten, ns, dc;
    double gpa;
    void nhap(){
        getline(cin,ten);
        getline(cin, ns);
        getline(cin,dc);
        cin >> gpa;
    }   
    void in() {
        cout << ten << ' ' << ns << ' ' << dc << ' ' << fixed << setprecision(2) << gpa << endl;
    }
};

int main() {
    int n;cin >> n;
    svien a[n];
    for (int i = 0; i < n; i++) {
        cin.ignore();
        a[i].nhap();
    }
    for (int i = 0; i < n; i++) {
        if(a[i].gpa>=2.5 && a[i].dc =="Nam Dinh")
            a[i].in();
    }
}