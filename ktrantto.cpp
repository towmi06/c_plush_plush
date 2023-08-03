#include<iostream>
#include <math.h>

using namespace std;

/*bool ngto(int n){
	int dem=0;
	for(int i = 1; i<= sqrt(n); i++){
		if(n%i==0){
			++dem; // uoc i
			if(i != n /i )	++ dem;// n/i
		}
	}
	cout << dem << endl;
	if(dem == 2)	
		return true;
	else	 return false;
}*/
 // su dung dang phu dinh de CM kp snt 
 bool ngto(int n){
 	if(n < 2) {
 		return false;
	 }
 	for(int i = 2; i<= sqrt(n); i++){
 		if(n%i == 0){
 			return false;
		 }
	 }
	 return true;
 }
int main(){
	long long n; cin >> n;
	if(ngto(n))//== true
		cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}