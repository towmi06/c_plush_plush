#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int nt( ll n){
    for(int i =2; i<= sqrt(n); i++){
        if(n%i == 0)
            return 0;
    }
    return n >1;
}

int check( ll n){
    for(int p = 1; p<= 32; p++){
        if(nt(p)){
            int tmp = (int)pow(2,p) -1;
            if(nt(tmp)){
                ll hh = 1ll*tmp*(int)pow(2,p-1);
                if(hh == n)
                    return 1;
            }

        }
    }
    return 0;
}
int main(){
    ll n; cin >> n;
    if(check(n))    cout <<"YES\n";
    else cout<<"NO\n";
}