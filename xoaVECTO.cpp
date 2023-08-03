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
    int m;cin >> m;
    vector<int> v(m); // nhap gtri cho vecto
    for(int i = 0; i< m; i++) cin >>v[i];
    
    int n; cin >> n;
    while(n--){
        /*
        k được sử dụng để đại diện cho loại thao tác. 
        Giá trị k = 1 đại diện cho thao tác thêm một phần tử vào cuối vector.
        Yêu cầu chỉ để phân biệt loại thao tác thêm phần tử vào vector 
    và loại thao tác xóa phần tử khỏi vector
        */
       int k; cin >> k;
       if(k == 1){// chen
            int idx; cin >> idx; // vtri can chen
            int x; cin >> x;// gtri chen 
                if(idx >= 0 && idx <= v.size())
                    v.insert(v.begin()+idx, x);
            } else if(k == 2){// xoa
                int idx; cin >> idx;
                if(idx>=0 && idx < v.size())
                    v.erase(v.begin()+idx);
            }
    }
    if(v.empty()) cout << "EMPTY";
    for(int i = 0; i< v.size(); i++)
        cout << v[i]<<' ';
}