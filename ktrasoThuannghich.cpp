#include<bits/stdc++.h>

using namespace std;
bool thuannghich(int n){
	int rev = 0, m=n;// m la bien tam
	while (n != 0){
		rev = rev * 10 + n %10;
		n /=10;
	}
	if(rev == m){
		return true;
	} else {
		return false;
	}
}

int main(){
	int n; cin >> n;
	if(thuannghich(n)){
		cout << "YES\n";
	} else cout <<"NO\n";
	
	return 0;
}
/*
#include<bits/stdc++.h>

using namespace std; 
int main() { 
    int t; cin >>t; 
    while(t--){ 
        long long n; 
        cin >> n; 
        long long rev = 0; 
        for (long long i = n; i > 0; i /= 10) { 
            rev = rev * 10 + i % 10; 
        } if(rev == n) 
            cout << "YES" << endl;
        else cout << "NO" << endl;  
    } 
}
*/