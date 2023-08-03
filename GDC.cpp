#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int main(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout <<  gcd(gcd(a, b), gcd(c, d)) << ' '<< lcm(lcm(a, b), lcm(c, d));
}