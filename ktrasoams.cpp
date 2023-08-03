#include <bits/stdc++.h>

using namespace std;
// Viet ctrinh so Strong la số có tổng giai thừa các chữ số của nó bằng chính nó 
// VD : 145 = 1! + 4! + 5! = 145
int gt(int n){
	long long kq = 1;
	for(int i =1; i<= n; i++){
		kq *=i;
	}
	return kq;
} 

bool strong(int n){
	int sum = 0, m = n;
	while(n!=0){
		int r = n % 10; // cso hang dvi
		sum += gt(r);
		n/=10;
	}
	if(sum == m){ // kthe vt truc tiep bang n vi n /10 se ve 0
		return true;
	}else{
	 	return false;
	}
}

int main(){
	int n; cin >> n;
	if(strong(n)){
		cout << "YES\n";
	}else {
		cout << "NO\n";
	}
	return 0;
}