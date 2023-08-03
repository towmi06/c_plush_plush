#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    int dem = 0, c = 0, l = 0;
    while(cin >> n){
        ++dem;
        if(n%2 ==0) ++c;
        else ++l;
    }
    if((dem % 2 ==0 && c > l) || (dem % 2 == 1  && l > c))
        cout << "YES"<< endl;
    else cout << "NO" << endl;
}