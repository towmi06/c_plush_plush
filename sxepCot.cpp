#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i< n; i++){
        for(int j = 0; j< n; j++){
            cin >> a[j][i]; // tao luon ma tran chuyen vi 
            // vi luong nhap k qtrong 
        }
    }
    for(int i = 0; i < n; i++){
        sort(a[i], a[i]+n);
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j < n; j++){
            cout << a[j][i]<< ' ';
        } cout << endl;
    }
}