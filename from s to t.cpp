#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s,t,p;
        cin>>s>>t>>p;
            for(int i=0;i<t.size();i++)
            {
                if(t[i]!=s[i])
                {
                    for(int j=0;j<p.size();j++)
                    {
                        if(p[j]==t[i])
                        {
                             s+=p[i];
                             p[i]='0';
                             break;
                        }
                    }
                }
            }
            cout<<s<<" "<<t<<endl;
           // if(s==t)cout<<"YES"<<endl;
           // else cout<<"NO"<<endl;
    }
}
