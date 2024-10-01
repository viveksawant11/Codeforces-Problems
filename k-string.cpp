#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    string s;
    
    cin >> k >> s;
    
    unordered_map<char, int> freq;
    
    for (char ch : s)
        freq[ch]++;
    
    for (auto it : freq) {
        if (it.second % k != 0) {
            cout << -1;
            return 0;
        }
    }

    string base;
    for (auto it : freq) 
        base.append(it.second / k, it.first);
    
    string res;
    for (int i = 0 ; i < k ; i++) 
        res += base;
    
    cout << res;
    return 0;
}