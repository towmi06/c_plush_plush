#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int tongcs(int n){
    int s=0;
    while(n){
        s += n % 10;
        n/=10;
    }
    return s;
}
bool cmp(int x, int y){
    if(tongcs(x)<= tongcs(y)) return 1;
    /*
    neu 2 tong bang nhau 
bool cmp(int x, int y) {
    if (tongcs(x) < tongcs(y))
        return true;
    else if (tongcs(x) == tongcs(y))
        return x < y;
    else
        return false;
}

    */
    else return 0;
}// return tongcs(x)< tong(y)
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n, cmp);
    for(int x : a) {
        
    }
}