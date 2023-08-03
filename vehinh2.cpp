#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int i, j;

	for(i = 1; i <=n;i++){
		for(j=1; j <= i; j ++){
				cout << '*';
			} cout << endl;
		} cout << endl;

	for(i = n; i>= 1; i--){
		for(j=1; j <= i; j ++){
			cout << "*";
		} cout << endl;
	}
	cout << endl;
	/*for (i =1; i <= n; i++){
		for (int j =n; j >= i; j--){
			if(i ==1 || i <= j){
				cout <<"*";
			} cout <<' ';
		} cout << endl;
	} cout << endl;*/
	
	for (i =1; i <= n; i++){
		for ( j = 1; j <= n; j++){
			if(  j <=(n - i ))	cout <<" ";
			else cout << "*";                 
		} cout << endl;
	}cout << endl;
	
	for (i = n; i>= 1; i--){
		for(j = 1; j<= n; j++){
			if(j <= n-i)	cout <<" ";
			else cout <<"*";
		}cout << endl;
	}cout << endl;
	 
	 /* for(i= 1; i <= n; i++){
	 		for(j = 1; j <= n; j++){
	 			if(j<i) cout <<" ";
	 			else cout << "*";
	 		}  cout << endl;
	 } cout << endl;*/
	 
	for(i=1; i<= n; i++){
		for(j=1; j <= n; j++){
			if(j==1 || i==n || j== i)	cout << "*";
			else cout <<" ";
		}cout << endl;
	}cout << endl;
	return 0;
}