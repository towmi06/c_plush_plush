#include<bits/stdc++.h>
using namespace std;


vector<string> kq, final;
int t, n;

void init(){
	queue<string>q;
	q.push("6");
	q.push("8");
	kq.push_back( "6");
	kq.push_back( "8");
	while(1){
		string top = q.front();
		q.pop();
		if(top.size() == 15) break;
		kq.push_back(top + "6");
		kq.push_back(top + "8");
		q.push(top + "6");
		q.push(top + "8");
		
	}
}
int main(){
	init();
	cin >> t;
	while(t--){
		cin >> n;
		for(auto x : kq){
			if(x.size() ==  n + 1) break;
			final.push_back(x);
		}
		reverse(final.begin(), final.end());
		for(auto x: final){
			cout << x << ' ';
		} cout << endl;
	}
}