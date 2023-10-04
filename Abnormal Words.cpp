#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ai;
    cin>>ai;
    int p;
    cin>>p;
    string s;
    cin>>s;
    if(ai=='E')
    {
        for(int i=0;i<s.size();i++)
        {
            int k=(int)(s[i]-'a');
            k+=p;
            k=k%26;
            s[i]=(char)(k+'a');
        }
    }
    if(ai=='D')
    {
                for(int i=0;i<s.size();i++)
        {
            int k=(int)(s[i]-'a');
            k-=p;
            if(k<0)k+=26;
            k=k%26;
            s[i]=(char)(k+'a');
        }
    }
    cout<<s<<endl;
}
