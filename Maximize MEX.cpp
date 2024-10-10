#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> vc(n);
        for (int i = 0 ; i < n ; i++) 
            cin >> vc[i];
            
        map<int,int > mp, freq;
        for (auto it : vc)
            freq[it]++;
        
        int cnt = 0;
        
        while (true) {
            if (freq[cnt] > 0) {
                freq[cnt]--;
                int f = freq[cnt];                  // See, if element still exists in 'freq' map
                mp[cnt % x] += f;
                cnt++;
            }
            else if (mp[cnt % x] > 0) {
                mp[cnt % x]--;
                cnt++;
            }
            else {
                break;
            }
        }
        
        cout << cnt << endl;
    }
}

// ai + nx = 4 (for example , we have considered 4) - it is the element which is not there in array
// 4 - ai = nx
// As nx is divisible by x, so (4 - ai) is also divisible by x
// (4 - ai) % x = 0
// (4 % x) - (ai % x) = 0
// 4 % x = ai % x

// Therefore , the element that isn't present in the array, gets this equation,
// aj % x = ai % x
// where , aj = element that isn't present in the array , and we are trying if it satisfies the condition
//              given in problem
// ai = element of array, that is extra or duplicate