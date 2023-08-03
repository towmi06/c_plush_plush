#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b , gthua = 1; cin >> a >> b;
	for(int i=1; i <= min(a,b); i++)	gthua*=i;
	cout << gthua;
	
	return 0;
}