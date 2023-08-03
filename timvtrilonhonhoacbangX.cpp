#include<bits/stdc++.h>
using namespace std;

int main (){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int x; cin >> x;
   /* int a[n];
    for(int &x: a) cin>> x;
    auto it = lower_bound(a, a+n,x);
    if(it == a+n){
        cout << "KHONG TIM THAY \n";
    }else {
        
    cout << *it<< endl;// it chi la con tro nen *it de chi vao gtri cua no
    cout << (it-a)<< endl; // xem it no dang tro den vi tri thu may

    }
    */
   // doi voi vector
    vector<int> a(n);
    for(int &x : a)cin >> x;
    auto it = lower_bound(a.begin(), a. end(),x);
    //--it; giam it xg tu vtri =3 thanh 1
    if(it == a.end()){
        cout << "Khong tim thay";
    } else {
        cout << *it<<endl;
        cout << (it-a.begin()) << endl;
    }
}
