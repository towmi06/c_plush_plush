#include <bits/stdc++.h>

using namespace std;
using ll = long long;
bool sphenic(ll n){
    int dem = 0;// de dem bn tsnt khac nhau 
    for( int i = 2; i <= sqrt(n); i++){
        if(n% i==0){
            ++dem;
            int mu = 0;
            while(n % i==0){
                ++ mu;
                n /= i;
            }
            if(mu >=2)   return false; // de loai so chua snto >=2
        }
    }
    if(n> 1)    ++dem;
    return dem == 3;
}

int main(){
    ll n; cin >> n;
    if(sphenic(n))  cout << 1 << endl;
    else cout << 0 << endl;
}