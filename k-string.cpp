#include<iostream>
using namespace std;

int main()
{
    int k;
    string s;
    cin>>k>>s;
    
    int count[26] = {0};
    
    for (size_t i=0; i<s.size(); i++) {
        count[s[i] - 'a'] += 1;
    }
    
    string s1;
    size_t c=0;
    for (; c<26; c++) {
        if (count[c] % k == 0)
            s1.append(count[c] / k, 'a'+ c);
        else 
            break;
    }
    
    if (c==26) {
        while(k--) {
            cout<<s1;
        }
    }
    else
        cout<<-1;
        
    return 0;
    
}