#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool TNg(int n){
    int m= n;
    int sum = 0;
    while(m){
        int r = m %10;
        sum  = sum * 10 +r;
        m /= 10;
    }
    if(sum == n)    return true;
        else return false;
}
// yeu cau co min 1 so 6 va sum co so cuoi = 8
bool Lp(int n){
    int sum = 0;// tomg cac chu so
    int dem = 0;
    while(n){
        int r =  n % 10;
        if(r == 6) ++dem;
        sum +=r;
        n /=10;
    }
    if(dem >= 1 && (sum % 10) == 8) return true;
    else return false;
}

int main(){
    int a, b; cin >> a>> b;
    for(int i = a; i<= b; i++){
        if(TNg(i) && Lp(i)) cout << i << " ";
    }
}