#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i< n; i++)   cin >> a[i];
    for(int i = 0; i < n; i++){
        bool ok = true;
        for(int j =0; j < i; j++){
            if(a[i] == a[j]){
                ok = false;
                break;
            }
        }
        if(ok){// dem tan suat
            int count = 1;
            for(int j = i+1; j < n; j++){ // de duyet tat ca nhung thang den sau i
                if(a[i] == a[j] ) ++count;
            }
            cout << a[i] << ' ' << count << endl;
        }
    }
}