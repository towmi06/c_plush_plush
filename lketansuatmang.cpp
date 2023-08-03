#include<bits/stdc++.h>
using namespace std;
int cnt[1000001];
int main(){
    int n; cin >> n;
    int a[n];
    int max_value = -1e9;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
        max_value = max(max_value, a[i]);
    }
    int tansuatmax= 0 , res;
    for(int i = 0; i<= max_value; i++){
        if(cnt[i] >tansuatmax){
            tansuatmax = cnt[i];
            res = i;
        }
    }
    cout << res <<' '<< tansuatmax << endl;
}