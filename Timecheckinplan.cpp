#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    pair<int,int>a[n];
    for(int i = 0; i< n; i++){
        cin >> a[i].first >> a[i].second;
        // thoi gian den va tg checkin
    }
    sort(a,a+n);
    ll endtime = a[0].first + a[0].second;
    for(int i = 1; i< n; i++){
        endtime = max(endtime, 0ll + a[i].first);
        endtime += a[i].second;
    }
    cout << endtime;
}