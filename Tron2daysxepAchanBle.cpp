#include<bits/stdc++.h>
using namespace std;

/* trộn 2 dãy sao cho Avào các vtri có chỉ số chẵn,
 dãy B được đưa vào các vị trí có chỉ số lẻ. 
  A được sxtăng dần,  B được sx giảm dần. 
  (Chú ý: chỉ số tính từ 0)
*/
int main(){
    int n; cin >> n;
    int a[n], b[n];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    sort(a, a+n);
    sort(b, b+n, greater<int>());
    for(int i = 0; i< n ; i++){
        cout << a[i]<< ' '<< b[i]<< ' ';
    }
}