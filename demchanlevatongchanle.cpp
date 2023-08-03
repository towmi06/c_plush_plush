#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long long cnt_chan = 0, cnt_le =0,
              sum_chan = 0, sum_le =0;
    for(int i =0; i< n; i++){
        int x; cin >> x;
        if(x % 2 == 0) {
            ++cnt_chan;
            sum_chan += x;
        } else {
            ++cnt_le;
            sum_le += x;
        }
    }
    cout << cnt_chan << endl << cnt_le << endl << sum_chan << endl << sum_le;
}