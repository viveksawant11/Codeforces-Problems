#include<iostream>
using namespace std;

int main()
{
    int n,arr[7];
    cin>>n;
    for (int i=0;i<7;i++)
        cin>>arr[i];
    
    int count=0,i=0;
    
    while (n>0)
    {
        count++;
        n-=arr[i%7];
        i++;
        
        if (n<=0)
            break;
    }
    
    if (count%7==0)
        cout<<7<<endl;
    else 
        cout<<count%7;
    
    return 0;
}