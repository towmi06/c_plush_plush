#include<bits/stdc++.h>
using namespace std;
using ll = long long;

// ham tra ve vector chua cac tu trong tem va ngay sinh
vector<string> tach(string s){
    vector<string> res;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        res.push_back(tmp);
    } return res;
}
// ham xu li ngay thang nam sinh
void ns(string s){
    stringstream ss(s);
    string tmp;
    while( getline(ss, tmp, '/')){
        // tach theo dau gach cheo
        // in ra k co so 0 o dau
        cout <<stoi(tmp);// bo 0-> chuyen thanh so
    } cout << endl;
}
int main(){
    int n; cin >> n;
    cin.ignore();
    map<string,int> mp; // nhung ng cung ho ten
    for(int i =0; i< n; i++){
        string s;getline(cin, s);
        
        // chuyen het cac ki tu thanh in thuong
        for(char &x : s) x = tolower(x);
        vector<string>res =tach(s);
        // tao email bang 1 xau rong
        string email = res[res.size()-2];
        //lay ho va dem
        for(int i = 0; i< res.size()-2;i++){
            email += res[i][0]; // res[i] tuc tu thu i; res[i][0] la ktu dau tien cua tu thu i do
        }
        mp[email]++;
        // nhung svien bi trung tt
        if(mp[email] == 1) cout << email << "@xyz.edu.vn"<< endl;
        else cout << email<< mp[email]<<"@xyz.edu.vn"<< endl;
        ns(res[res.size()-1]);
    }
}