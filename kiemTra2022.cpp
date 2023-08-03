#include <iostream>
using namespace std;

int main(){
	int n; cin >>n;
	bool check = false;
	for(int i = 1; i<=n; i++){
		int tmp; cin >> tmp;
		if (tmp == 2022){
			check = true;
		}
	} if(check== false){
		cout << "NO\n";
	} else cout << "YES\n";
	return 0;
}