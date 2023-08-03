#include<bits/stdc++.h>
using namespace std;
int cnt25 = 0, cnt50 = 0;

bool check(int a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] == 25){
            cnt25++;
        } else if(a[i] == 50){
            if(cnt25 >= 1) {
                --cnt25;
                cnt50++;
            } else return false;
        } else if(a[i] == 100){
            if(cnt25 >= 1 && cnt50 >=1){
                --cnt25;
                --cnt50;
            } else if(cnt25 >= 3){
                     cnt25-=3;
            } else  return false;

        }
    } return true;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x :  a) cin >> x;
    if(check(a,n)) cout << "YES\n";
    else cout << "NO";
}