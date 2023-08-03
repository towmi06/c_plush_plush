#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

bool nto(int n){
    for(int i = 2; i<= sqrt(n); i++){
        if(n % i ==0)return false;
    }
    return n > 1;
}
bool ckmax(int n){
    int max_digitfinal = n % 10;
    n /=10;
    while(n){
        int r = n % 10;
        if(max_digitfinal < r) return false ;
        n /=10;
    }
    return true;
}
int main(){
    int n; cin >> n;
    int cnt = 0;
    for(int i = 2; i<= n; i++){
        if( ckmax(i) && nto(i))  {
            cout << i << " ";
            ++ cnt;
        }
    }
    cout << endl << cnt;
}