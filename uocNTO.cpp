#include <iostream> 
#include <math.h> 
using namespace std; 
void phantich(long long n){ 
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){ 
            cout<<i<<" ";
            n/=i; 
        } 
    } 
    if(n!=1) cout<<n; 
    cout <<endl; 
} 
int main(){ 
    long long n,t; cin>>t; 
    while(t--){ 
        cin>>n; 
        phantich(n); 
    } 
}