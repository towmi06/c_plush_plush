#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int &x:a) cin >> x;
    int vtri=-1;
    for(int i = 0; i< n; i++){
        if(a[i] == x){
            vtri = i;
            break;
        }
    }
    if(vtri == -1) cout <<"NOT FOUND\n";
    else {
        for(int i = 0 ; i<n ; i++){
            if(i!=vtri) cout << a[i] <<' ';
        }
    }
