#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for (int i =0; i < t; i++){
		int m , n, l;
		cin >> m >> n >> l;
		int a[100000];
		int c[100005];
		int k = 0;
		for (int j =1;j <=m; j ++){
			cin >> a[j];
			c [k++] = a[j];
		}
		int b[100000];
		for ( int j = 1; j<=n; j++){
			cin >> b[j];
			c[k++] = b[j];
		}
		sort (c, c+k);
		cout << c[l -1]<< "";
		cout << endl;
	}
}
