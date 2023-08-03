#include<bits/stdc++.h>
using namespace std;
// n hoan vi = n! cau hinh
int n, a[1005],ok;
/*
void sinh(){
    int i = n-1;
    while(i >= 1 && a[i] > a[i+1]){
        // dk de gap thang lon hon thi bo qua
        --i;
    }
    if( i == 0) ok = 0; 
    else{
        // di tim thang > a[i] trg doan [i+1,n]
        int j = n;
        while(a[i]>a[j])--j;// tim a[j]> a[j]
        swap(a[i], a[j]);
        reverse(a+(i+1), a + n +1); // neu a+n k thoi no se chi chay den n-1
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for(int i = 1; i<= n; i++){
        a[i] = i; // tu 1 -> n
    }
    ok = 1;
    while(ok){
        for(int i = 1; i<= n; i++){
            cout << a[i];
        } cout << endl;
        sinh();
    }
}*/

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>> n;
    int a[n];
    for(int i = 0; i< n; i++) a[i]= i+1;
    do{
        for(int i = 0; i < n; i++){
            cout << a[i];
        } cout << endl;
    } while(next_permutation(a,a+n));// sinh ra 1 cau hinh tt tu cau hinh htai
}

