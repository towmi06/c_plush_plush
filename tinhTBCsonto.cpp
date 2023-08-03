#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

bool nto(int n){
    for(int i =2; i<= sqrt(n); i++){
        if(n % i == 0) return false;
    } return n > 1;
}
int main(){
    int n ; cin >> n; 
    int sum = 0, dem =0;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i =0; i<= n; i++){
        if(nto(a[i])){
            sum +=a[i];
            ++dem;
        }
    } 
    cout << fixed << setprecision(3)<< 1.000*sum/ dem;
}