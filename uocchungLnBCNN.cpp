#include<iostream>
#include <math.h>

using namespace std;
int ucln(int a, int b){
	while(b!= 0){
		// doi vai tro : (a,b) => (b,a%b)
		int soDu = a%b;
		a= b;
		b = soDu;
	}
	return a;
}
int bcnn(int a, int b){
	
	return a* b /ucln(a,b);
}
int main(){
	int a,b ; cin >> a >> b;
	if(bcnn(a, b)){
		cout << bcnn(a,b) ;
	}
	return 0;
}
/* dung thu vien 
#include<algorithm>
int main (){
	int a, b; cin >> a >> b;
	cout << __gcd(a,b);
	return 0;
}*/