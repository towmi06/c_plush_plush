#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a)cin >> x;
    int maxn = 0; //gtri max cac ptu tu vtri 0 -> i-1
    for(int i =0; i< n; i++){
        if(a[i] > maxn){
            cout << a[i]<< ' ';
            maxn = a[i];
        }
    }
}