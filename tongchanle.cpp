#include<bits/stdc++.h>
using namespace std;

int s(int n){
	if(n == 0)	return 0;
	else return pow(-1,n) * n +s(n-1); 
}

int main(){
	int n; cin >> n;
	cout << s(n);
	return 0;
}