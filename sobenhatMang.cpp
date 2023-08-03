#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int dem = 0, Min= 1001;// vi mang chay den 10^3
    int a[n];
    for(int &x : a) cin >> x;
    for( int x : a) Min = min(x, Min);
    for(int x : a){
        if(x == Min){
            ++dem;
        }
    }cout << dem ;
}