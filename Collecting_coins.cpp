#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long a,b,c,n,total_coins,equal_coins;
        cin>>a>>b>>c>>n;
        total_coins=a+b+c+n;
        equal_coins=(total_coins)/3;
        
        if (total_coins%3==0 && a<=equal_coins && b<=equal_coins && c<=equal_coins)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}