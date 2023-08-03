#include<bits/stdc++.h>
using namespace std;

struct svien{
    string ten, ns, dc;
    double gpa;
    void nhap(){
        getline(cin,ten);
        getline(cin, ns);
        getline(cin,dc);
        cin >> gpa;
    }
    void in() {
        cout << ten << ' ';
        cout << ns << ' '<< dc << ' '<< fixed << setprecision(2)<< gpa <<endl;
    }
};
int main(){
    int n ; cin >> n;
    svien a[n];
    for(int i = 0; i< n; i++){
        cin.ignore();
        a[i].nhap();
    }  
    for(int i = 0; i< n; i++){
        string s = a[i].ns;
        if(s[2]  != '/') s.insert(0, "0");
        if(s[5] != '/') s.insert(3, "0");
        if(stoi(s.substr(4,2)) == 4)
            a[i].in();
    }  
}