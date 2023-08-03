#include<bits/stdc++.h>
using namespace std;

int n, a[100005], final;// check xem da la cau hinh cuoi cx c
void ktao(){
    for(int i = 1; i<= n; i++){
        a[i]=0;
    }
}
// bat dau tu bit cuoi cung va di tim bit 0
void sinh(){
    int i = n;
    while( i >= 1 && a[i]==1){
        // i >= 1 de no tranh ve 0 va rac
        a[i]=0;
        --i;
    }
    if( i == 0) final = 0;// cau hinh cuoi cung
    else a[i]=1;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    final = 1;
    ktao();
    while(final){
        for(int i = 1; i<= n; i++){
            cout << a[i] << ' ';
        }
        cout << endl;
        sinh();
    }
}