#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s;
		int k, khacnhau=0;
		cin >> s >>k;
		int cnt[26]= {0};
		for(int i = 0; i< s.size(); i++){
			if(s[i] >= 'a' && s[i]  <= 'z') cnt[s[i] - 'a']++;
			if(s[i]  >= 'A' && s[i] <= 'Z') cnt[s[i] - 'A']++;
// cnt[s[i] - 'a'] : chuyen doi chu cai tai s[i ]thanh so tu 1->26
		}
		for(int i = 0; i< 26; i++) {
			// neu cnt xh thi tang bien khac nhau
			if(cnt[i]) khacnhau++;
		}
		if(s.size() < 26) cout << 0<< endl;
		else if(k + khacnhau >= 26) cout << 1;
		else cout << 0<< endl;
	}
}