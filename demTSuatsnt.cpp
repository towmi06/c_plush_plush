#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e7+1;

bool check (int n){
    for(int i = 2; i<= sqrt(n); i++){
        if(n % i == 0) return false;
    } return n> 1;
}
int main(){
    map<int, int>a;
    int x; 
    // in theo thu tu nen co vector
    vector<int>v;
    while(cin >> x) {// doc x
        a[x]++;
        v.push_back(x);
    }
    // in theo tt
    for(int i = 0; i< v.size(); i++){
        if(a[v[i]] !=0 && check(v[i])) {
            cout << v[i]<< " "<< a[v[i]]<< endl;
            a[v[i]] = 0;
        }
    }
}