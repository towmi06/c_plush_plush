#include<iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int dem = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <=n; j++ ){
			cout << dem << " ";
			++dem;
		} cout << endl;
	}cout << endl;
	
	for(int i = 1; i <= n ; i++){
		int x= i;
		for(int j =1; j <= n; j++){
		cout << x << " ";
		++x;			
		}cout << endl;
	}cout << endl;
/*1 2 3 4 5 
  2 3 4 5 6 
  3 4 5 6 7 
  4 5 6 7 8 
  5 6 7 8 9 */
	
	for(int i = 1; i<= n; i++){
		for(int j =1; j <=n; j ++){
			if(j<= n - i)	cout << "~";
			else cout << i;
		}cout << endl;
	}cout << endl;
	
	for(int i=1; i<= n; i++){
		int x= i, kc = n-1; // luu khoang cach giua 2 so 
		for(int j=1; j <= i ; j++){
			cout << x <<" ";
			x+= kc;
			--kc;
		}cout << endl;
	}cout << endl;
	/*1 
      2 6 
      3 7 10 
	  4 8 11 13 
	  5 9 12 14 15 */
	return 0;
}