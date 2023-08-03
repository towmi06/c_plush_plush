#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], sum = 0;
		map<int,int>mp;
		for(int &x : a){
			cin >> x;
			mp[x]++;
		}
		for(int i = 0; i < mp.size(); i++){
			if(mp[i] > 1){
				sum +=mp[i];
			}
		}
		cout<< sum << endl;
	}
}