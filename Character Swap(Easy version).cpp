#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int k, n;
    cin >> k;
    
    string s, t;
    
    while (k--) {
        cin >> n;
        cin >> s >> t;
             
        vector<int> mismatch;
        
        for (int i = 0 ; i < n ; i++) {
            if (s[i] != t[i])
                mismatch.push_back(i);
        }
        
        if (mismatch.size() == 2) {
            int i = mismatch[0];
            int j = mismatch[1];
            
            swap(s[i], t[j]);
            
            if (s == t)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
        else 
            cout << "NO" << endl;
    }
    
    return 0;
}