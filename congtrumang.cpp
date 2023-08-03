#include<bits/stdc++.h>
using namespace std;

//Ví dụ A[] = {1, 2, 3, 4, 5} và B[] = {1, 1, 2, 1} 
//ta sẽ tính giá trị của mảng A[] = 1 + 2 + 3 - 4 + 5
int main(){
    int n; cin >> n;
    int a[n], b[n-1];
    for(int &x : a) cin >> x;
    for(int &x : b)cin >> x;
    int i = 1; // con tro chay chi so cua a;
    int j = 0; // chay cho so cua b
    long long sum = a[0];
    while(i <n && j < (n-1)){
        if(b[j] == 1) sum +=a[i];
        else sum -=a[i];
        ++i; ++j;
    }
    cout << sum;
}