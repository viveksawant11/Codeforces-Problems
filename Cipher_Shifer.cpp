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
        string s1;
        cin>>s1;
        string s2="";
        
        for (int i=0;i<n;i++)
        {
            s2+=s1[i];
            
            for (int j=i+1;j<n;j++)
            {
                if (s1[j]==s1[i])
                {
                    i=j;
                    break;
                }
            }
        }
        cout<<s2<<endl;
    }
    return 0;
}