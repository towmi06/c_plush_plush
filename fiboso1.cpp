#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n ; cin >> n;
    ll f1 = 1, f2 = 1, fn;
    for(int i = 1; i <= n ; i++){
        if( i == 1 || i == 2)   cout << 1 << endl;
        else{
            fn = f2 + f1;
           ll tmp = f2;
            f2 = fn; f1= tmp;
            cout << fn << endl;
        }
    }
}