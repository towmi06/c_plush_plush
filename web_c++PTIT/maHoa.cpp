#include<bits/stdc++.h>
using namespace std;

string mahoa(const string &s){
	string tmp = "";
	for(char c: s){
		if(isalpha(c)){
			if(isupper(c)){
				c = ((c-'A' +2) % 26) + 'A';
			} else 
				c = ((c - 'a' -2 +26) %26) + 'a';
		}
		tmp += c;
	}
	return tmp;
}

int main(){
	string s; getline(cin, s);
	cout << mahoa(s)<< endl;
}