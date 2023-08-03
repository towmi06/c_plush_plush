#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int,int>a, pair<int,int>b){
    return a.second < b.second;
}

int main(){
    int n; cin >> n;
    pair<int,int>a[n];
    for(int i = 0; i< n; i++){
        cin >> a[i].first >>a[i].second;
    }
    int dem =1;// vi toi thieu xem dc 1 bo phim
    sort(a,a+n,cmp);
    ll ktfimtrc = a[0].second;
    for(int i =1; i< n; i++){
        if(a[i].first >= ktfimtrc){
            // tg bat dau 
            ++dem;
            ktfimtrc= a[i].second;
        }
    } cout << dem;
}