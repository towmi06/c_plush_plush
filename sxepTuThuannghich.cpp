#include<bits/stdc++.h>
using namespace std;

struct word{
    string data;
    int fre;
};

bool check(string s){
    string t =  s;
    reverse(t.begin(),t.end());
    return t == s;
}
bool cmp(word a, word b){
    if(a.fre != b.fre) return a.fre > b.fre;
    return a.data < b.data;
}
int main(){
    string s;
    vector<word> v;
    int maxn = 0;
    string kq = "";
    while(cin >> s){
        if(!check(s)) continue;
        bool oke = false;
        for(int i = 0; i< v.size(); i++){
            if(v[i].data == s){
                v[i].fre++;
                maxn = max(maxn, v[i].fre);
                oke = true;
                break;
            }
        }
        if(!oke) v.push_back({s,1});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v){
        cout << x.data<< " " << x.fre<< endl;
    }
}