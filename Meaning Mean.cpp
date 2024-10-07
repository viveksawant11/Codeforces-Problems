#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> arr(n);

        for (int i = 0 ; i < n ; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        int res = (arr[0] + arr[1]) / 2;
        for (int i = 2 ; i < n ; i++) {
            res = (res + arr[i]) / 2;
        }

        cout << res << endl;
    }
}