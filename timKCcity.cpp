#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i =0; i< n; i++){
        if(i == 0){ // dau
            cout << a[i+1] - a[i] << " "<< a[n-1] - a[0] << endl;
        } else if(i == n-1){ // cuoi
            cout << a[n-1] - a[n-2] << ' '<< a[n-1] - a[0]<< endl;
        }else { // giua
            cout << min(a[i+1] - a[i], a[i] - a[i-1]) << ' '<< max(a[i]-a[0], a[n-1] - a[i]) << endl;
        }
    }
}