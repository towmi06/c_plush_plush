#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, a[100], b[100][100];
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int dem=0;
		for(int i=0; i<n; i++){
			int check=0;
			for(int j=0; j<n-i-1; j++){
				if(a[j] > a[j+1]) {
					check = 1;
					swap(a[j], a[j+1]);
				}
			}
			if(check == 0) 
			break;
			for(int j=0; j<n; j++){
			    b[i][j] = a[j];
			}
			dem++;
		}		
		for(int i=dem-1; i>=0; i-- ){
			cout << "Buoc " << i+1 << ": " ;
			for(int j=0; j<n; j++){
				cout << b[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

