#include <bits/stdc++.h>

using namespace std;
int main (){
	int n; cin >>n;
	int m = 0;
	m += n/100; n %= 100;
	m += n/20;  n %= 20;
	m += n/10;	n %= 10;
	m += n/5;   n %= 5;
	m += n;
	cout << m ;
	return 0;
}