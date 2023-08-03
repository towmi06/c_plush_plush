#include<iostream>
#include<math.h>

using namespace std;
// prime factorizaton: phan tich thua so nguyen to 
void ptich(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0){
			//i la thua so nto cua n;
			while(n% i == 0){
				cout << i << " ";
				n/= i;
				/* vd  n = 120, i = 2 vong while se chay nhu sau
				120 % 2 = 60 % 2= 30% 2 = 15 
				15 khong chia tiep dc cho 2 nx while kthuc*/
			}
		}
	}
	if(n!= 1){// neu k co cau lenh nay thi no se thieu th n cuoi cung 
		cout << n;
	}
}


int main(){
	int n; cin >> n;
	ptich(n);
	return 0;
}