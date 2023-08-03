#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		cin.ignore();
		string s; 
		getline(cin, s);
		string tmp;
		stringstream ss(s);
		map<string,int>mp;
		while(ss >> tmp){
			mp[tmp]++;
		}
		int sum = 0;
		for(auto it : mp){
			sum += it.second;
		}
		cout << sum<< endl;
	}
}