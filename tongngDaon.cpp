#include<bits/stdc++.h>
using namespace std;

double s(int n){
    if(n == 1)  return 1;
    else return 1.000* 1/n + s(n-1); 
}
int main(){
    int n; cin >> n;
    cout << fixed << setprecision(4) << s(n);
}