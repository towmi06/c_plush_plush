#include<bits/stdc++.h>
using namespace std;

int n, t, a[10005], final;

int next(){
	int i = n;
	while( i >= 0 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0) final = 0;
	else{
		a[i] =1;
	}
}
int main(){
	cin >> t;
	while(t--){
		cin >> n;
		final = 1;
		for(int i = 1; i <= n; i++){
			a[i]= 0;
		}
		while(final){
			for(int i = 1; i<= n; i++){
				if(a[i]) cout << "B"; // a[i] = 1 thi in B
				else cout << "A";
			} cout << ' ';
			next();
		} cout << endl;
	}
}