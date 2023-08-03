#include<bits/stdc++.h>
using namespace std;

struct svien{
    string ten, ns, dc;
    double gpa;
    void nhap(){
        getline(cin, ten);
        getline(cin, ns);
        getline(cin, dc);
        cin >> gpa;
    }
};
int main(){
    int n; cin >> n;
    svien a[n];
    map<string,int>mp;
    for(int i = 0; i< n; i++){
        cin.ignore();
        a[i].nhap();
        mp[a[i].dc]++;
    }
    int maxn = 0;
    for(auto x : mp){
        maxn = max(maxn, x.second);
    }
    for(auto x : mp){
        if(x.second == maxn)
            cout << x.first << endl;
    }
}