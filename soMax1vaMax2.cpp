#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int max1 = INT_MIN, max2 = INT_MIN;
    for( int x : a){
        if(x > max1){
            max2 = max1; max1 = x;
        } else if(x > max2){
            max2 = x;
        }
    }
    cout << max1<< ' '<< max2;
}