#include<bits/stdc++.h>
using namespace std;

int t, n, k, a[100005], findn;
string s;

void sinh(string s){
	// xau chay tu 0-> n-1 nen phai -1 dvi nx thanh -2
	int i = s.size()-2; // bat dau tu chi so sat chi so cuoi cung
	while( i >= 0 && s[i] >=s[i+1]){
		//mk can thi a[i]< a[i-1];
		--i;
	}
	if(i == -1){
		cout << "BIGGEST"<< endl;
	} else{
		int j = s.size()-1;
		while(s[i]>= s[j]){
			j--;
		} swap(s[i], s[j]);
		reverse(s.begin() + i + 1, s.end());
		cout << s<< endl;
	}
}

int main(){
	cin >> t;
	while(t--){
		int testcase; cin >> testcase;
		cin.ignore();
		cin >> s;
		cout << testcase << " ";
		if(next_permutation(s.begin(), s.end()))
			cout << s<< endl;
		else cout << "BIGGEST"<< endl;
		
		//sinh(s);
	}
}