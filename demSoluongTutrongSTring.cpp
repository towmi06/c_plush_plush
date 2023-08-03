#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    int cnt=0;
    string tmp;
    stringstream ss(s);
    while(ss >> tmp){
        cnt ++;
    }
    cout << cnt;
}