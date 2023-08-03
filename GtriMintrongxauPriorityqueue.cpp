#include<bits/stdc++.h>
using namespace std;

// k < chieu dau cua xau
int main(){
	int t; cin >> t;
	while(t--){
		int k; cin >> k;
		string s; cin >> s;
		map<char,int>mp;
		priority_queue<int>pq;
		for(char &x : s) mp[x]++;
		for(auto it : mp){
			pq.push(it.second);// push tsuat
		}
		while( k> 0){ // lap k lan va lay ra tsuat lon nhat
			int top = pq.top();
			pq.pop();
			--top; --k;
			pq.push(max(top,0));// de tranh k lon hon  se ra gtri am
		}
		long long ans = 0;
		while(!pq.empty()){
			ans += 1ll * pq.top()* pq.top();
			pq.pop();
		}
		cout << ans<< endl;
	}
}