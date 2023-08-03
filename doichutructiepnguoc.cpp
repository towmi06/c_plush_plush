#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int steps[n-1][2];
        int cnt = 0;
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                if (a[j] < a[i]) {
                    swap(a[i], a[j]);
                    steps[cnt][0] = j;
                    steps[cnt][1] = i;
                    cnt++;
                }
            }
        }

        for (int i = cnt-1; i >= 0; i--) {
            cout << steps[i][0] << " " << steps[i][1] << endl;
        }
    }
    return 0;
}
