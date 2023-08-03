#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ; cin >> n;
    int a[n][n];
    for(int i = 0 ; i < n;i++){
        for(int j = 0 ; j < n ;j++)
        {
			int x ; cin >> x;
			a[j][i] = x;
		}
    }
    for(int i = 1 ; i < n;i++){
        for(int j = 0 ; j < n ; j++){
            // ô phía trên a[i - 1][j] và ô phía trên bên phải a[i - 1][j + 1].
            if(j == 0) a[i][j] += max(a[i - 1][j] , a[i - 1][j + 1]);
            //ô phía trên a[i - 1][j] và ô phía trên bên trái a[i - 1][j - 1].
            else if(j == n - 1) a[i][j] += max(a[i - 1][j] , a[i - 1][j - 1]);
            else {
        // 3 ô phía trên: a[i - 1][j], a[i - 1][j - 1], a[i - 1][j + 1].
                a[i][j] += max({a[i - 1][j] , a[i - 1][j - 1] , a[i - 1][j + 1]});
            }
        }
    }// hàm max_element để tìm giá trị lớn nhất trong dòng cuối cùng của a
    cout << *max_element(a[n - 1] , a[n - 1] + n);
    
}