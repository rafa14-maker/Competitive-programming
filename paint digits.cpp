#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string f;
        f=s;
        for(int i=0;i<f.size()-1;i++)
        {
            f=max(f[i],f[i+1]);
        }
        string krr;
        for(int i=0;i<s.size();i++)
        {
            if(f[i]==s[i])
            {
                krr+='2';
            }
            else if(f[i]>s[i])
            {
                krr+='1';
            }
        }
        cout<<krr<<endl;
    }
}
