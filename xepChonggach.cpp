#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    sort(a,a+n, greater<int>());
    int docung = a[0];
    int ans =1;// vien gach dau nx
    for(int i = 1; i< n; i++){
        if(docung > 0){
            docung = min(docung -1,a[i]);
            ++ans;
        }
    } cout << ans;
}