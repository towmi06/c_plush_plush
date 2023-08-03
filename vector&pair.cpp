#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i< n; i++){
        cin >> v[i]. first >> v[i]. second;
    }
    for(pair<int, int> it : v){
        double kq = sqrt(it.first * it. first+ it.second*it.second);
        cout << fixed << setprecision(2) << kq << " ";
    }
}