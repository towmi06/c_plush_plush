#include<bits/stdc++.h>
using namespace std;
// in tong chan va le 
int main(){
    int n; cin  >> n;
    int a[n];
    int kqc =0, kql=0;
    for(int i = 0; i < n; i++)
         cin >> a[i];
    for(int i =0; i< n; i++){
         if(a[i] %2 == 0) {
             
             kqc += a[i];
         } else {
            kql += a[i];
         }
    }
     cout << kqc << endl<< kql ;
}