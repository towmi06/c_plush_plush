#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int check( ll n){
	int c = sqrt(n);
	if( 1ll * c * c == n)
		return true;
	return false;
}
int main(){
    ll n; cin >> n;
    if(check(n))    cout << "YES\n" ;
    else cout << "NO\n";
}