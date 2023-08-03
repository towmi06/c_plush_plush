#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool nto(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)  return false;
    } return n>1;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i< n; i++){
        int sum_left = 0;
        for(int j = 0; j < i; j ++) sum_left +=a[j];
        int sum_right = 0;
        for(int j = i+1; j < n ; j ++) sum_right += a[j];
        if(nto(sum_left) && nto(sum_right))   cout << i << ' ';
    }
}