#include<bits/stdc++.h>

using namespace std;
int main (){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	long long n; cin >> n;
	cout << n%10 <<  endl << n%100<< endl;
}