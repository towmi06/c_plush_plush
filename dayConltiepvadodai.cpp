#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    ll dem = 1;
    ll sum = a[0];
    ll length_max = 1;
    ll sum_max = a[0];
    int start = 0; // vtri bat dau cua day con

    for(int i = 1; i< n; i++){
        if(a[i] != a[i-1]){
            ++dem;
            sum += a[i];
        } else {
            if(dem > length_max){
                length_max = dem;
                sum_max = sum;
                start = i - length_max;// cso bat dau 
            } else if(dem == length_max){
                if(sum > sum_max){
                    sum_max = sum;
                    start = i - length_max;
                }
            }//reset day moi 
            dem = 1;
            sum = a[i];
        }
    }
    // cap nhat gia tri o phan duoi 
    if(dem > length_max){
        length_max = dem;
         sum_max = sum;
        start = n - length_max;// cso bat dau 
    } else if(dem == length_max){
           if(sum > sum_max){
            sum_max = sum;
            start = n - length_max;
            
        }
    } cout <<  length_max << endl;
    for(int i = 0; i< length_max; i++)
        cout << a[i+start] << ' ';
}