#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n>>m;
    int a[n]; for(int &x : a) cin >> x;
    int b[m]; for(int &x : b) cin >> x;
    int i = 0, j =0, ans=0;
    // nam cao hon nu 
    sort(a,a+n);
    sort(b,b+m);
    while(i < n && j<m){
        if(a[i]> b[j]){
            i++; j++; ans++;
        } else i++;
    }
    cout << ans;
}
/* Dang 2:
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, m ; cin >> n >> m;
    int a[n], b[m];
    for(int &x: a) cin >> x;
    for(int &x : b) cin >> x;
    sort(a,a+n);
    sort(b, b+m);
    int i = 0,j= 0, dem = 0;
    while( i < n && j < m){
        if(abs(a[i]-b[j]) <= 1){
            dem++;
            i++; j++;
        } else if(a[i] - b[j] > 1)
                j++;
        else if(a[i] - b[j] < 1) i++;
        // ban nu gioi hon
    } cout << dem;
}
*/