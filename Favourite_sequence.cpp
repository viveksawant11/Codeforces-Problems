#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> b(n);
        for (int i=0;i<n;i++)
            cin>>b[i];
        
        vector<int> a(n);
        
        for (int i=0;i<n/2;i++)
            cout<<b[i]<<" "<<b[n-i-1]<<" ";
        
        if (n%2!=0)
            cout<<b[n/2]<<endl;
    }
    
    return 0;
}