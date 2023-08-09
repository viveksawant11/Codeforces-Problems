#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string b;
        cin>>b;
        
        for (int i=0; i<b.length()-1; i+=2)
            cout<<b[i];
            
        cout<<b[b.length()-1]<<endl;
    }
    return 0;
}
