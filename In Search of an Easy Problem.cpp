#include<iostream>
using namespace std;

int main()
{
    int n,sum(0);
    cin>>n;
    
    while(n--)
    {
        int k;
        cin>>k;
        
        if (k==1)
        {
           cout<<"HARD"<<endl;
           return 0;
        }
    }
        
    cout<<"EASY"<<endl;
        
    return 0;
}