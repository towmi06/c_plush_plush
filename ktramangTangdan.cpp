/*#include<bits/stdc++.h>
using namespace std;
int Max = 0, Min = 10;

bool check(int a[], int i, int j){
    if(i == -1) return true; // i dung trc j va xet tu cuoi
    if(a[i] >= a[j]) return false;
    else return check(a, i -1, j-1);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(check(a, n-2, n-1)) cout << "YES";
    else cout << "NO";
}
*/
#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n){
    for(int i = 0; i< n; i++){
        if (a[i] >= a[i+1] ) return false; 
    }
    return true;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a)cin >> x;
    if(check(a,n)) cout << "YES\n";
    else cout << "NO\n";
}