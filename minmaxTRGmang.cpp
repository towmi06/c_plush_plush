#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
   int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    int min_val = INT_MAX,
        max_val = INT_MIN;
    for(int i =0; i< n; i++){
        if(a[i] < min_val)
            min_val = a[i];
        if(a[i] > max_val)
            max_val = a[i];
    }
    cout << min_val <<' '<< max_val;
}

 /*  int a[100]={3, 1, 6, 5}
    for(int x:a){
        x = 100;
    }
}*/