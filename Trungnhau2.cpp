#include<bits/stdc++.h>
using namespace std;

int test, n, k, t;
long long a[1000001];
set<int>s;

// // |ai -aj|<= t <=> aj-t <= ai <= t+aj
bool solve(){
    // Ktra s có a[i] t/m a[j] - t <= a[i] <= a[j] + t hay không.
    for(int j = 0; j < k; j++){
	// Tìm a[i] >= a[j] - t.
        auto it = s.lower_bound(a[j] - t); 
        if(it != s.end() && (*it <= a[j] + t)) return true; 
        s.insert(a[j]); 
    }
    for(int j = k; j < n; j++){
        s.erase(s.count(a[j - k])); 
        s.insert(a[j]); 
    }
    return false;
}

int main(){
    cin >> test; 
    while(test--){
        cin >> n >> k >> t;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(solve()) cout << "YES" << endl; /
        else cout << "NO" << endl; 
    }
}
