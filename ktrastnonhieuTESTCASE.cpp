#include<bits/stdc++.h>
using namespace std;
int prime[10000001];

void sang(){
    for(int i = 0; i<= 10000001; i++){
        prime[i]= true;
    }
    prime[0]= false;
    prime[1]= false;
    for(int i = 0; i<= sqrt(10000001); i++){
        if(prime[i]){
            for(int j = i*i; j <=10000001 ; j+= i) prime[j] = false;
        }
    }
}

int main(){
    sang();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(prime[n])    cout << "YES\n";
        else cout <<"NO\n";
    }
}