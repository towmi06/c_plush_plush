#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int a, m; cin >> a >> m;
        int x = -1;
        for(int i = 0; i < m; i++){
            if(i * a % m == 1){
                x = i;
                break;
            }
        }
        cout << x << endl;
    }
    return 0;
}
