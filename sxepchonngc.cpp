#include <bits/stdc++.h>

using namespace std;
int main(){
	int n, a[100], i, j, b[100][100];
		cin >> n;
		for (i = 0 ;i < n; i ++)
			cin >> a[i];
		for(i = 0; i < n - 1; i++){
			int min = i;
			for(j = i + 1; j < n; j ++){
				if( a[j] < a[min]){
					min = j;
				}
			}
			swap( a[min], a[i]);
			for(int k = 0 ; k < n; k++){
				b[i][k] = a[k];	
			}
		}
		for(int i = n - 2; i >= 0; i--){
				cout << "Buoc " << i+1 << ": ";
				for (j = 0; j < n ; j++){
					cout << b[i][j] << " ";
				}
				cout << endl;
		}
	return 0;
}