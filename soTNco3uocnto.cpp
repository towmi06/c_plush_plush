#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool checkTN(int n){
    int m = n;// tranh TH n bi thay doi
    int sum = 0;// so thuan nghich
    while(m){
        int r = m %10; // duyet tu so cuoi cung;
        sum = sum *10 + r;
        m /=10; // sau do xoa so da thuc hien di
    }
    if(sum == n)    return true;
    else return false;
}
bool checkNto(int n){
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n% i == 0)    n /= i;
            ++cnt;
        }
    }
    if(n != 1) ++cnt;
    return cnt >=3;
}
int main(){
    int a, b; cin >> a >> b;
    bool ok = false; // k co so dep
    for(int i = a ; i <= b; i++){
        if(checkTN(i) && checkNto(i)) { // de check NT trc vi no nhanh hon
            cout << i <<' ';
            ok = true;
        }
    }
    if(ok == false)      cout << "-1";
}