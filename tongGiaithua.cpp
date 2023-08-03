#include<bits/stdc++.h>

using namespace std;

long long gt(int n){
	int kq= 1;
	for(int i= 1; i<= n; i++){
		kq *=i;
	}
	return kq;
}
long long  sum(int n){
	int r=0;
	for(int i= 1; i<= n; i++){
		r+= gt(i);
	}
	return r;
}
int main(){
	int n; cin >>n;
	cout << sum(n);
	return 0;
}
/*#include<bits/stdc++.h> 
using namespace std; 
using ll = long long;
    int main(){ int n; 
    cin>>n; ll sum = 0; 
    ll mul = 1; 
    for(int i=1;i<=n;i++){ mul *= i; sum += mul; }
    cout<<sum; 
    
}
*/