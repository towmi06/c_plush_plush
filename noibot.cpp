#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
    	int check = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j+1]) {
            	check = 1;
                swap(a[j], a[j+1]);
            }
        }
        if( check == 0)
        break;
        cout << "Buoc " << i+1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }

    return 0;
}
