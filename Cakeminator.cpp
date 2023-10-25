#include<iostream>
using namespace std;
int main()
{
    int r,c;
    int row[10]={0},col[10]={0};
    cin>>r>>c;
    string s;

    for (int i=0;i<r;i++)
    {
        cin>>s;
        for (int j=0;j<c;j++)
        {
            if (s[j]=='S')
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }

    int cakes(0);

    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (row[i]==0 || col[j]==0)
                cakes++;
        }
    }
    cout<<cakes<<endl;

    return 0;
}