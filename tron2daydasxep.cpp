#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    multiset<int> se;
    int a[n], b[m];
    for(int i = 0; i< n; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    for(int j = 0; j< m; j++){
        cin >> b[j];
        se.insert(b[j]);
    }
     for(auto it = se.begin();  it != se.end(); it++){
        cout << *it << ' ';
    }
}