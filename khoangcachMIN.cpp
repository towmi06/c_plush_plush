#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x: a) cin >> x;
    sort(a,a+n);

    int dem=0, kc= INT_MAX;// kc la so rat lon nen sd rank base for look
    for(int i =1; i< n; i++){
        if(a[i]- a[i-1] < kc){
            kc = a[i]-a[i-1];
            dem = 1;
        }else if(a[i]- a[i-1] == kc){
            dem++;
        }
    }
    cout << kc << ' '<< dem << endl;
}