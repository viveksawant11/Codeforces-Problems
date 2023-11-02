#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    // int a[3];
    // cin>>a[0]>>a[1]>>a[2];
    
    // sort(a,a+3);
    // cout<<a[2]-a[0];            (max-min)

    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    
    cout<<max({x1,x2,x3})-min({x1,x2,x3})<<endl;
    
    return 0;
}