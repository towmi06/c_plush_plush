#include<bits/stdc++.h>
using namespace std;

int n, k, t, final, a[10005];

void sinh(){
	int i = k;// khoi tao bat dau
	while(i>= 1 && a[i] == n-k+i){
		--i;
	}
	if(i==0) final = 0;
	else {
		a[i]++;
		for(int j = i + 1; j<= k; j++){
			a[j] = a[j-1] +1;
		}
	}
}

int main(){
	cin >> t; 
	while(t--){
		final = 1;
		cin >> n >> k;
		for(int i = 1; i<= k; i++){
			a[i]= i;
		}
		while(final){
			for(int i = 1; i<= k; i++){
				cout <<a[i];
			}
			cout << ' ';
			sinh();
		} cout << endl;
	}
	return 0;
}