#include<bits/stdc++.h>
using namespace std;

int first(int a[], int n, int x){
    int l = 0, r = n-1,res = -1;//chi so dau tien cua ptu x
    while(l <= r){
        int m = (l+r)/2;
        if(a[m] == x){
            r = m-1;
            res = m;
        } else if(a[m] > x)  r = m-1;
        else l = m+1;
    } return res;
}
int last(int a[], int n, int x){
    int l =0, r = n-1, res = -1;
    while( l <= r){
        int m  = ( l+r)/2;
        if(a[m]== x){
            res = m;
            l = m+1;
        } else if(a[m] > x) r = m-1;
        else l = m+1;
    } return res;
}
int lonhonbangn(int a[], int n, int x){
    int l =0, r = n-1, res = -1;
    while(l <= r){
        int m = (l+r)/2;
        if(a[m] >= x){
            res = m;
            r =m-1;
        } else l = m+1;
    }  return res;
}
int lonhonn(int a[], int n, int x){
    int l = 0, r = n-1, res = -1;
    while(l <= r){
        int m = (l+r)/2;
        if(a[m]>x){
            res = m;
            r=m-1;
        } else l  = m+1;
    }return res;
}
int tsuatxh(int a[], int n, int x){
    if(first(a,n,x) != -1) 
        return last(a,n,x)-first(a,n,x)+1;
    else return 0;
}
int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for (int &h : a) cin >>h;
    cout << first(a,n,x)<< endl;
    cout <<last(a,n,x)<<endl;
    cout <<lonhonbangn(a,n,x)<<endl;
    cout<<lonhonn(a,n,x) << endl;
    cout <<tsuatxh(a,n,x);
   
}