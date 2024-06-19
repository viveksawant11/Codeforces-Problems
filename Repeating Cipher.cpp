#include<iostream>
using namespace std;

int main() 
{
    int n,len(1),i(0);
    cin>>n;                           
    string t,s;                         
    cin>>t;
    
    while (i<n) {
        s.push_back(t[i]);
        i += (len++);
    }
    
    cout<<s;
    
    return 0;
}