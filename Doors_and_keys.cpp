#include<iostream>
#include<map> 
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        map<char,bool>key;
        
        key['r']=false;
        key['g']=false;
        key['b']=false;
        
        bool ans=true;
        
        for (int i=0;i<s.size();i++)
        {
            if (s[i]<'Z' && key[s[i]-'A'+'a']==false)
            {
                ans=false;
                break;
            }
            
            else if (s[i]>'a')
                key[s[i]]=true;
        }
        
        if (ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}