#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int b[n], c[m];
    int i =0, j =0;
    for(int &x : b)cin >> x;
    for(int &x : c) cin >> x;
    while(i<n && j < m){
        if(b[i] > c[j] ) {
            cout << "c"<< j+1<<' ';
            j++;
        }else {
            cout << "b"<< i+1 << ' ';
            i++;
        }
    }
    while(i < n) {
        cout << 'b'<< i+1<< ' ';
        i++;
    }
    while(j<m) {
        cout << 'c'<< j+1<<' ';
        j++;
    }
}