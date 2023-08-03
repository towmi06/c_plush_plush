#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n, t;
stack<int> st;

int main(){
	cin >> t; 
	while(t--){
		cin >> n;
		while( n!=0){
			st.push(n % 2);
			n /=2;
		}
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}	
	}
}