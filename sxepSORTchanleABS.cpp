#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int k;// = X
bool cmp1(int x, int y){
    if(abs (x- k) != abs(y - k))// xsep tang dan
        return abs(x-k) < abs(y-k);
    else {
        return x< y;
    }
}
bool cmp2(int x, int y){
    // sxep chan trc tang, le sau giam
    // 4 TH CC, ll, CL, LC
    if(x% 2 == 0 && y % 2 == 0) return x < y;
    if(x % 2 == 1 && y % 2 == 1) return x > y;
    if( x % 2 == 0 && y % 2 == 1) return 1;
    return 0;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n, cmp1);
    for(int x: a) cout << x << ' ';
    cout << endl;
    sort(a, a+n, cmp2);
    for(int x : a) cout << x << ' ';
}