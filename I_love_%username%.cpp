#include<iostream>
using namespace std;

int main()
{
    int n,points;
    cin>>n>>points;
    
    int min(points),max(points),count(0);
    while(n--)
    {
        cin>>points;
        
        if (points<min)
        {
            min=points;
            count+=1;
        }
        
        if (points>max)
        {
            max=points;
            count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}