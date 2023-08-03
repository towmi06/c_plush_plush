#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int x)
{
    if (left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
        return mid;
    } else if (arr[mid] > x) {
        return binarySearch(arr, left, mid - 1, x);
    } else {
        return binarySearch(arr, mid + 1, right, x);
    }
}

int countOccurrences(int arr[], int n, int x)
{
    int index = binarySearch(arr, 0, n - 1, x);
    if (index == -1) {
        return -1;
    }

    int count = 1;
    int left = index - 1;
    while (left >= 0 && arr[left] == x) {
        count++;
        left--;
    }

    int right = index + 1;
    while (right < n && arr[right] == x) {
        count++;
        right++;
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << countOccurrences(arr, n, x) << endl;
    }
    return 0;
}
