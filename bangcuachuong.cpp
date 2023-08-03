#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int tich = 1;
    for(int i = 1; i<=n ; i++){
        for(int j =1; j<= 10; j++){
            tich = i * j;
            cout << i << " x "<< j << " = " << tich << endl;
        }
        cout << endl;
    }
    return 0;
}