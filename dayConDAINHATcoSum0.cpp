#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    ll sum = 0;
    int indx =-1; // luu chu so cuoi cung 
    int maxn  = 0; // luu chi so max
    map<ll, int>mp;
    mp[0]=-1;// de duyet bat dau tu  mp[sum]+1
    for(int i = 0; i< n; i++){
        sum += a[i];
        if(mp.find(sum) !=mp.end()){
            // chua xh
            if(i - mp[sum] > maxn){ 
                maxn =  i - mp[sum];
                indx = i;
            }
        }
        else mp[sum]= i;
    }
    if(indx == -1)cout << "NOT FOUND";
    else {
        for(int i = indx - maxn +1; i<= indx; i++){
            cout << a[i] << ' ';
        }
    }
}