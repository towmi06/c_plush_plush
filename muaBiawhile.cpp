#include<bits/stdc++.h>

using namespace std;
int main (){
	int n; cin >> n;
	int sum = n/28; // so bia uong dc nhieu nhat
	int ans = sum; // so vo bia sa khi uong
	while (ans>=3){
		int r = ans/3;//so chai bia doi duoc
		ans %= 3;
		sum += r; // doi xong lai uong 
		ans += r; // uong xong du ra r vo
	}
	cout << sum <<endl;
}