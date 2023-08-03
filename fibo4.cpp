#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll F[10001];
ll t[10001];

void sang(){
    for(int i = 0; i<= 10000; i++){
        F[i]= true;
    }
    F[0]= F[1]= false;
    for(int i = 0; i<= sqrt(10000); i++){
        if(F[i]){
            for(int j = i*i; j<= 10000;j+=i)
                F[j]=false;
        }
    }
}
int sum(ll n){
    int tong = 0;
    while(n){
        tong +=n%10;
        n/=10;
    }
    return tong;
}
bool fibo(int n){
    t[0]=0; t[1]= 1;
    for(int i = 2; i<= 10000; i++)
        t[i]= t[i-1]+ t[i-2];
    for(int i = 2; i<= 10000; i++){
        if(sum(n) == t[i])  return true;
    }
    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sang();
    int n ; cin >> n;
    for(int i = 0; i<= n; i++){
        if(F[i] && fibo(i)) cout << i <<" ";
    }
}