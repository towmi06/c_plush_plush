#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void ptich1( ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i ==0){
                n/=i;
            }cout << i <<" ";
        } 
    }
    if(n != 1)  cout << n <<" ";
    cout << endl;
}
void ptich2(ll n){
    for(int i = 2 ; i <= sqrt(n); i++){
        if( n % i == 0){
            int mu =0;
            while(n % i == 0){
                ++ mu;
                n/=i;
            }cout << '(' << i << ", " << mu << ')' << " ";
        } 
    }
    if(n != 1) cout << '(' << n <<", " << 1 <<')';
    cout << endl;
}

void ptich3(ll n){
    for(int i = 2; i<= sqrt(n); i++){
        if(n % i ==0){
            while(n % i == 0){
                n /= i;
                cout << i ;
                if(n != 1) cout << " x ";
            }
        }
    }if(n != 1) cout << n << " ";
}
int main(){
    ll n; cin >> n;
    ptich1(n);
    ptich2(n);
    ptich3(n);
}