#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        
        for (int i=0; i<n; i++)
            cin>>a[i];
            
        int index(0);
        
        if (a[0]!=a[1] && a[0]!=a[2])
            index=1;
        else 
        {
            for (int i=1; i<n; i++)
            {
                if (a[i]!=a[0])
                {
                    index=i+1;
                    break;
                }
            }
        }
        cout<<index<<endl;
    }
    return 0;
}