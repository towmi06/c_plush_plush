#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int main(){
    ll n; cin >> n;
    ll m = n;
    int dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0;
    ll sum =0;
    while(m){ // duyet tat ca cac chi so cua n
        ll r = m % 10; 
        sum = sum *10+r; // tinh lat ngc cua thg ban dau 
        m /= 10;
        if( r == 2) ++dem1;
        else if( r == 3) ++dem2;
        else if(r == 5) ++dem3;
        else if( r == 7) ++dem4;
    }
    if(dem1 != 0) cout << 2 << " " << dem1 << endl;
    if(dem2 != 0) cout << 3 << " "<< dem2 << endl;
    if(dem3 !=0 ) cout << 5 << " " << dem3 << endl;
    if(dem4 !=0 ) cout << 7 << " "<< dem4 << endl;
    cout << endl;

    // lat ng lai de tim dk2
    n = sum;
    while(n){
        //lat ng :  chu so cuoi cung cua sum = cso dau cua n
        ll r = n % 10;
        if(r == 2  && dem1 !=0) {
            cout << 2 << " " << dem1 << endl;
            dem1 = 0; // vi no ow tren da in r nen k in lai
        } 
        if(r == 3 && dem2 != 0){
            cout << 3<< ' '<< dem2<< endl;
            dem2 = 0;
        }
        if( r == 5 && dem3 != 0){
            cout << 5 << " "<< dem3 <<endl;
            dem3 = 0;
        }
        if(r == 7 && dem4 != 0){
            cout << 7 << " " << dem4 << endl;
            dem4 = 0;
        }
        n/=10;
    }
}