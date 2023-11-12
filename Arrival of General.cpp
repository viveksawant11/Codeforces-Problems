#include<iostream>
using namespace std;

int main()
{
    int n;
    int maxv(0),minv(1000),maxi(0),mini(0);
    cin>>n;
    
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        
        if (x>maxv)
        {
            maxv=x;
            maxi=i;
        }
        if (x<=minv)
        {
            minv=x;
            mini=i;
        }
    }
    if (maxi<mini)
        cout<<maxi+(n-mini-1)<<endl;
    else 
        cout<<maxi+(n-mini-1)-1<<endl;

    return 0;
}