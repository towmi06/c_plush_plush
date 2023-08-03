#include<bits/stdc++.h>
using  namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i =0; i<= n; i++){
        cin >> a[i];
    }
    int max_val = INT_MIN, min_val = INT_MAX;
        for(int x: a){
            min_val =min(min_val,x);
            max_val = max(max_val, x);
        } // tim gtri nho nhat cuoi cx va gtri lon nhat dau tien 
        int pos1 = -1 , pos2 = -1; // pos 1: ptu max xh dau tien , pos2: ptu min xhcuoi
        for(int i =0; i < n; i++){
            if(a[i] == min_val){
                pos2 = i;
            }
            if(a[i] ==  max_val && pos1 == -1){
                pos1 = i;
            }
        }
        cout << pos2 << ' '<< pos1 << endl;
}