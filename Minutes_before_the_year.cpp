#include<iostream>
using namespace std;
int main()
{
    int t,h,m,hr;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        hr = (24 - h) - 1;
        cout<<hr*60+(60-m)<<endl;
    }
}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int h,m,t,day,time;
//    cin>>t;
//    while(t--)
//    {
//        time=0;
//        cin>>h>>m;
//        day=24*60;
//        time=h*60+m;
//        cout<<day-time<<endl;
//    }
//    return 0;
//}
