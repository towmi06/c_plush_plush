#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// cho A[n], B[m] chèn B[m] vào chỉ số p của mảng A 

int main(){
    int n, m, p; cin >> n>> m >> p;
    int a[n]; for(int &x : a) cin >> x;
    int b[m]; for(int &x : b) cin >> x;
    for(int i = 0; i< n; i++){
        if(i == p){
            for(int j = 0; j< m; j++)// chen b
                cout << b[j] << " ";
        } // neu k bang in ra bt
        cout << a[i] << ' ';
    }
}
/*
Sample Input 0
10 7 5
64 94 78 99 50 21 57 41 68 16 
73 91 15 89 2 85 61 

Sample Output 0
64 94 78 99 50 73 91 15 89 2 85 61 21 57 41 68 16 */