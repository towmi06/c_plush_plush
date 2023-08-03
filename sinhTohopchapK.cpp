#include<bits/stdc++.h>
using namespace std;

int n, k, a[100005], ok;

void sinh(){
    int i = k;
    while( i>= 1 && a[i] == n-k+i){
        --i;
    }
    if( i == 0) ok = 0; // cau hinh cuoi cx
    else {
        a[i]++;
        for(int j = i+1; j<= k; j++){
            a[j]= a[j-1]+1;
        }
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
    ok = 1;
    while(ok){
        for(int i = 1; i<= k; i++){
            cout << a[i];
        } cout << endl;
        sinh();
    }
}