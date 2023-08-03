#include <bits/stdc++.h>
using namespace std;
int n, k, check = 0;
int A[30];
stack<int> ST;
void in(){
    for (int i = 1; i <= n; i++){
        cout << A[i];
    }
    cout << " ";
}
void Generating(){
    int i=n-1;
    while (i>=1&&A[i]>A[i+1]) i--;
    int j=n;
    if (i==0){
        check=1;
    }    
    while (j>i&&A[i]>A[j]) j--;
    swap(A[i],A[j]);
    i++;
    reverse(A+i,A+n+1);
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int B[100000][10];
        int j=1;
        cin >> n ;
        for (int i = 1; i <= n; i++){
            A[i] = i;
        }
        while (!check){
            for (int x = 1; x <=n; x++){
                B[j][x]=A[x];
            }
            j++;
            Generating();
        }
        for (int x = j-1; x >=1; x--){
            for (int i = 1; i <=n; i++){
                cout<<B[x][i];
            }
            cout<<" ";   
        }       
        cout<<"\n";
        check=0;
    }
    return 0;
}
