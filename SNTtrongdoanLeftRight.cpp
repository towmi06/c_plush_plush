#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 1e6+1;
int nto[maxn];// danh dau 
int t[maxn];// so cac so nto tu  0-> i

void sangnto(){
    nto[0]= nto[1]=1;
    for(int i = 2; i<= sqrt(maxn); i++){
        if(nto[i]==0){
            for(int j = i*i; j<= maxn; j+=i)
                nto[j] = 1;
        }
    }
    t[0]=t[1]=0;
    for(int i =2; i<= maxn; i++ ){
        if(nto[i]==0){
            t[i]= t[i-1]+1;
        } else t[i]= t[i-1];
    }
}

int main(){
    int q; cin >> q;
    sangnto();
    while(q--){
        int l, r; cin >> l>> r;
        cout << t[r]-t[l-1]<< endl;
    }
}