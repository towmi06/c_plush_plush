#include<bits/stdc++.h>
using namespace std;

int S(int n){
    if(n == 0){
        return 0;
    } else return n + S(n-1);
}
int main(){
    int n; cin >> n;
    cout << S(n) << endl;
}