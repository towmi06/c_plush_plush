#include<bits/stdc++.h>
using namespace std;

bool check(string t){
    string h = t;
    reverse(h.begin(), h.end());
    return h == t;
}

bool cmp(string a, string b){
        return a.size()< b.size();
}
int main(){
    string s; getline(cin,s);
    string tmp;
    stringstream ss(s);
    vector<string>v;
    set<string>se;
    while(ss >> tmp){
        if(!se.count(tmp) && check(tmp)){
            v.push_back(tmp);
            se.insert(tmp);
        }
    }// tt xh thi stable_sort
    stable_sort(v.begin(), v.end(), cmp);
    for(auto it : v) cout << it << ' ';
}