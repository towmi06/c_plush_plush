#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i =1; i<= n; i++){
    int cnt = i ;
        for(int j = 1; j <= (2 * n -1) ; j++){
            if(j >= n - i +1 && j <= n+i-1) {
                if( j < n){
                    cout << cnt <<' ';
                    ++cnt;
                } else {
                    cout << cnt <<' ';
                    cnt--;
                }
            }
             else {
                cout <<"  ";
             }
        }
        cout << endl;
     }   
}