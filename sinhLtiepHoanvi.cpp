#include<bits/stdc++.h>
using namespace std;

int t, n, a[10005];

int main(){
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i< n; i++){
			a[i]=i + 1; // hoan vi
		}
		do{
			for(int i = 0; i < n; i++){
				cout << a[i] ;
			} cout << ' ';
		} while(next_permutation(a, a+n));
		cout << endl;   
	}                      
}
		