#include<bits/stdc++.h>
using namespace std;

string inHoaDau(string s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++)
        s[i] = tolower(s[i]);
    return s;
}

string chuyenName(string s){
    stringstream ss(s);
    string res = "";
    string x;
    while(ss >> x){
        res += inHoaDau(x) + " ";
    }
    res.pop_back();// xoa khoang trang cuoi cung
    return res;
}

string Date(string date){
    if(date[2] != '/') date = "0"+ date;
    if(date[5] != '/') date.insert(3,"0");
    return date;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string name, date; getline(cin, name);
    getline(cin,date);
    cout << chuyenName(name)<< endl;
    cout << Date(date) ;
}