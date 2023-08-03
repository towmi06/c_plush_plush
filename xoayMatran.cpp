#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int m = n;
    int a[n][m];
    int Cv[n][m]; // chuyen vi
    for(int i = 0; i < n; i++){
         for(int j = 0; j < m; j++){
            cin >> a[i][j];
            Cv[j][i]= a[i][j];
         }
    }
    //in Ma tran chuyen vi
    cout << "Pattern 1:" << endl;
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            cout << Cv[j][i]<< ' ';
        } cout << endl;
    }
    // in lat ngc tu cuoi len , phai -> trai
    cout << "Pattern 2:\n";
    for(int i = n-1; i >=0; i--){
        for(int j = m-1; j >= 0; j--){
            cout << a[i][j]<< ' ';
        }cout << endl;
    }
    // in chuyen tu cot cuoi thanh hang
    cout << "Pattern 3:\n";
    for(int j = m-1; j>=0; j--){
        for(int i = 0; i< n; i++){
            cout << a[i][j]<<' ';
        }cout << endl;
    }
    // lat ngc cot cuoi len cot dau 
    cout << "Pattern 4:\n";
    for(int i = 0; i< n; i++){
        for(int j = m-1; j>=0; j--){
            cout << a[i][j]<<' ';
        }cout << endl;
    }
}