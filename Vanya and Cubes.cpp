#include<iostream>
using namespace std;

int main() 
{
    int n,h(0),c(0);
    cin>>n;
    
    while(n > c + h) {
        h++;                        //h=1,2,3
        c += h;                     //c=1,3,6 
        n -= c;                     //n=18,15,9
    }
    cout<<h;
    
    return 0;
}