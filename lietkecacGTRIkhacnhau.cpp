#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0;  i< n; i++)        cin >> a[i];
    for(int i = 0; i < n; i++){// ktra xem co in hay ko 
          bool oke = true;
          for(int j =0; j <i ; j++ ){
                if(a[i]== a[j]){
                    oke = false;
                    break;
                }
          }
          if(oke) cout << a[i] << ' ';
    }
}