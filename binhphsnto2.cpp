#include<bits/stdc++.h>
using namespace std;
// in ra so dep trg doan a, b
using ll= long long;
bool check(ll n){
    for(int i = 2; i<= sqrt(n); i++){
        if(n% i == 0){
            int mu = 0;
            while(n%i==0){
                ++mu;
                n/=i;
            }
            if(mu == 1) return false;
        }
    }
    if(n >1) return false;
    return true;
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(check(i)) cout << i << ' ';
    }
}