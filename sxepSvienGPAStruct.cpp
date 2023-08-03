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

bool cmp(svien a, svien b){
    return a.gpa >b.gpa; // giam dan 
}
int main(){
    int n ; cin >> n;
    svien a[n];
    for(int i = 0; i< n; i++){
        cin.ignore();
        a[i].nhap();
    }
    stable_sort(a,a+n,cmp);   
    for(int i = 0; i< n; i++){
        a[i].in();
    }  
}