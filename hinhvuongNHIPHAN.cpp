#include<bits/stdc++.h>
using namespace std;
int main (){
    int n; cin >> n;
    for(int i=1; i<= n; i++){
        if(i % 2 == 1){
            for(int j = 1; j <= n; j ++){
                if(j % 2 == 1)  cout << "0";
                else cout << "1";
            }cout << endl;
        } else {
            for(int j = 1; j <= n ; j++){
                if(j % 2 == 1)  cout << "1";
                else cout <<"0";
            } cout << endl;
        }
    }
}