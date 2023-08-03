#include<bits/stdc++.h>
using namespace std;


double distance(pair<int, int> a){ // khoang cach
    return sqrt(a.first *a.first + a.second * a.second);
}

bool cmp(pair<int, int>a, pair<int,int>b){
    if(distance(a) != distance(b)) 
        return distance(a)< distance(b);
    else{
        if(a.first != b.first) return a.first <b.first;
        else return a.second < b.second;
    } 
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin >> n;
    pair<int, int>a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i].first>> a[i].second;
    sort(a, a+n, cmp);
    for(auto x: a) cout << x.first << " "<< x.second << endl;
    
}