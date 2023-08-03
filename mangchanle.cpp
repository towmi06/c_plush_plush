#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int x;
    int c=0,l=0; 
    while(cin >> x){
        if(x % 2 == 0) c++;
        else l++;
    }
    if(c > l)  cout << "CHAN";
    else  if(c<l) cout << "LE";
    else cout <<"CHANLE\n";
}