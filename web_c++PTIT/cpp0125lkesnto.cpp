#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6+1; 
int F[maxn];

void sang(){
    for(int i = 0; i <= maxn; i++)
        F[i] = 1;
    F[0] =0;
    F[1]=0;
    for(int i = 0; i<= sqrt(maxn); i++){
        if(F[i]){
            for(int j = i * i; j <= maxn; j+=i )
                F[j] = 0;
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
    int a, b; cin >> a >> b;
    sang();
    if(a > b) swap(a,b); // de bai k co dkien a,b
    for(int i = a; i <= b; i++){
        if(F[i]) cout << i << ' ';
    }
}