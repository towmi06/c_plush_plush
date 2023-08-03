#include<bits/stdc++.h>
using namespace std;

int ngto(int n){
 	int dem=0;
 	if(n< 2)	return 0;
	for(int i = 2; i<= n; i++){
		if(n %i == 0){
			++dem; 
			if(i != n /i ){
				++ dem;		
			if(dem == 2){
			cout << i << " ";
			i++;
			}
		}
	}
	}
}
int main(){
	int n; cin >> n;
	ngto(n);
	return 0;
}