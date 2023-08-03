#include<bits/stdc++.h>
using namespace std;
using ll = long long;

string chuyenThuong(string s){
    // neu dung for(char &x : s)
    for(int i = 0; i< s.size(); i++){
        s[i] = tolower(s[i]);
    } return s;
}
string chuyenHoa(string s){
    for(int i = 0; i< s.size(); i++){
        s[i] = topperer(s[i]);
    } return s;
}
int main(){
    string s; getline(cin,s)
   cout << chuyenHoa(s) << endl << chuyenThuong(s);
}