#include<bits/stdc++.h>
using namespace std;
int m = 1000000;
long long F[1000001];
bool prime[1000001];

void sang(){
    for(int i = 0; i<= m; i++){
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    for(int i = 2; i * i <= (m); i++){
        if(prime[i]){
            for(int j = i*i; j<= m; j+= i)
                prime[j]= false;
        }
    }
    F[0]= false;
    for(int i = 1; i<= m; i++)
        F[i] = F[i-1] + prime[i];
}

int main(){
    sang();
    int t ; cin >> t;
    while(t--){
        int l, r; cin >> l >> r;
        cout << F[r]- F[l-1]<< endl;
    }
}