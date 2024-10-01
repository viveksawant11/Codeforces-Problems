#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        int cnt = 0;
        vector<int> vc(27);
        
        for (int i = 0 ; i < n ; i++) {
            vc[s[i] - 'A']++;
            
            if (vc[s[i] - 'A'] == (s[i] - 'A' + 1))
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
} 