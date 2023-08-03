#include<iostream>

using namespace std;
int C[20], k, n;

void in() {
	for(int i = 1; i <= k; i++) cout << C[i] << " ";
	cout << endl;
}

void quaylui(int i) {
    for (int j = n - k + i; j >= C[i - 1] + 1; j--) {
        C[i] = j;
        if (i == k) in();
        else quaylui(i + 1);
    }
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        C[0] = 0;
        quaylui(1);
    }
    return 0;
}