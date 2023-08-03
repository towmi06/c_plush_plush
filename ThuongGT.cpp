// s(n) = 1/0! + 1/1! + 1/2! + ... + 1/(n-1)!
#include<bits/stdc++.h>

using namespace std;

int main (){
	int n; cin >> n;
	double sum = 0;
	for(int i = 0; i <= (n-1); i ++){
		long long gt = 1;
		for(int j = 1; j <=i; j++){
			gt *=j;
		}
		sum += 1.0/gt;
	}
	cout << fixed <<setprecision(4) <<sum;
	return 0;
}
