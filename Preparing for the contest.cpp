#include<iostream>
using namespace std;

int main()
{
    int t; 
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        
        int excite = n - k;
        for (int i = excite ; i <= n ; i++) 
            cout << i << " ";
        
        for (int i = excite - 1 ; i > 0 ; i--)
            cout << i << " ";
        
        cout << endl;
    }
    return 0;
}