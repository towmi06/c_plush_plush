#include<bits/stdc++.h>
using namespace std;
int main (){
    int n; cin >> n;
    for(int i=1; i<= n; i++){
        if(i % 2 == 1){
            char c = 'A'+ i -1;
            for(int j = c; j <=  c + n - 1; j ++){
                 cout << (char)j;
            }cout << endl;
        } else {
            char x = 'a' + i-1
            for(int j = x; j <= x + n - 1 ; j++){
                cout << (char)j;
            } cout << endl;
        }
    }
}