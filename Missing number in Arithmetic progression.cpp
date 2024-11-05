#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr, int n) {
    // Calculate the common difference 'd'
    int d = (arr[n - 1] - arr[0]) / n;

    int low = 0, high = n - 1;
    
    // Binary search to find the missing number
    while (low < high) {
        int mid = low + (high - low) / 2;
        int expected = arr[0] + mid * d;

        // If the current element is equal to the expected element,
        // then missing element must be in the right half
        if (arr[mid] == expected) {
            low = mid + 1;
        } else {
            // Otherwise, it's in the left half
            high = mid;
        }
    }
    
    // The missing element is at position 'low'
    return arr[0] + low * d;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << missingNumber(arr, n) << endl;
    }
    return 0;
}
