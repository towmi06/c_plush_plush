/*#include<bits/stdc++.h>
using namespace std;

int n, k , a[1005];
bool ok=true;

void in (){
	for(int i=1; i<= k; i++) cout << a[i];
	cout <<" ";
}
void sinh(){
	int i=k;
	while(i>0 && a[i] == n - k + 1) i--;
	if(i<=0){
		ok = false;
		return;
	}
	else {
		a[i]++;
		for(int j=i+1; j <= k; j++)  a[j] = a[j-1]+1;
	}
}

int main (){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1; i<=k; i++)
			a[i]= i;
		ok=true;
		while(ok){
			in();
			sinh();
		}
		cout << endl;
	}
	return 0;
}*/
#include <iostream>
#include <vector>

using namespace std;

void backtrack(int start, int n, int k, vector<int>& curr) {
    if (curr.size() == k) {
        for (int i = 0; i < k; i++) {
            cout << curr[i] << "";
        }
        cout << " "; 
       
        return;
    }
    for (int i = start; i <= n; i++) {
        curr.push_back(i);
        backtrack(i + 1, n, k, curr);
        curr.pop_back();
    }
}

void find_subsets(int n, int k) {
    vector<int> curr;
    backtrack(1, n, k, curr);
    cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,k;
		cin >> n >> k;
		find_subsets(n,k);
	}
	return 0;
}

