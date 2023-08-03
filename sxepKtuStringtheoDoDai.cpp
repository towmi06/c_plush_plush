#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(string a, string b){
    if(a.length() == b.length()){
        // a.size() ; b.size
        return a<b;
    }
    return a.length()<b.length();
}

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    //sxep tu dien tang dan 
    sort(v.begin(), v.end()); 
    for(auto it : v) cout << it<< ' ';
    cout << endl;
    // sxep theo chieu dai tang dan
    sort(v.begin(),v.end(), cmp);
    for(auto it : v) cout << it << ' ';
}