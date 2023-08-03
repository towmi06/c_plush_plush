#include<bits/stdc++.h>
using namespace std;
int prime[10000001];

void sang(int n){
    for(int i = 0; i <= 10000001; i++){
        prime[i] = true;
    }
    prime[0]= false;
    prime[1]= false;
    for(int i = 0; i <= sqrt(n); i++){
        if(prime[i]){
            for(int j = i * i; j <= n; j +=i)
                prime[j]= false;
        }
    }
}
int main(){
    int n; cin >> n;
    sang(n);
    for(int i = 0; i <= n; i++){
        if(prime[i]) cout << i <<' ';
    }
}