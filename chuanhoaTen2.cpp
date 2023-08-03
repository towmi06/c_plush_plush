#include<bits/stdc++.h>
using namespace std;

string ten(string s){
    for(int i = 0; i< s.size(); i++)
        s[i] = toupper(s[i]);
    return s;
}

string HoDem(string s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}


int main(){
    string s; getline(cin, s);
    string tmp;
    string hoTen = "";
    stringstream ss(s);
    vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    for(int i = 0; i < v.size() - 1; i++){ 
        hoTen += HoDem(v[i]) + ' ';
    }
    hoTen.pop_back();
    cout << hoTen << ", " << ten(v.back()) << endl;
    cout << ten(v.back()) << ", " << hoTen;

    return 0;
}