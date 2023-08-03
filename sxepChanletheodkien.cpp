#include<bits/stdc++.h>
using namespace std;
int chan(int n){
    int cnt_chan = 0;
    while(n){
        int r = n%10;
        if(r%2 ==0) cnt_chan++;
        n/=10;
    }return cnt_chan;
}

int le(int n){
    int cnt_le=0;
    while (n){
        int r = n % 10;
        if( r% 2 ==1) cnt_le++;
        n /=10;
    } return cnt_le;
}

bool cmp1(int a, int b){
    if(chan(a) != chan(b)) return chan(a)< chan(b);
    else return a< b;
}

bool cmp2(int a, int b){
    return le(a) < le(b);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i< n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a,a+n,cmp1);// stt da thay doi 
    for(int x : a) cout << x << ' ';
    cout << endl;

    stable_sort(b,b+n,cmp2);
    for(int x : b) cout << x << ' ';
}