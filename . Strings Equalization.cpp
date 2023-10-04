#include<bits/stdc++.h>
using namespace std;

int counter=0;

int g;

void f(string s,string k,int pos)
{
    if(pos>=g)
        return ;

    if(k==s)
    {
        counter++;
        return ;
    }

    if(k[pos]!=s[pos])
    {
        string r;
        r=k;
        for(int i=0;i<k.size();i++)
        {
            if(k[i]==s[pos])
            {
                r[pos]=k[i];
            }
        }
        if(r==s)
        {
            counter++;
            return ;
        }
        //cout<<r<<endl;
        f(s,r,pos+1);
        f(s,k,pos+1);
    }
    f(s,k,pos+1);

   }

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string a,b;
        cin>>a>>b;
        g=a.size();
        counter=0;
       // cout<<a<<b;
        f(a,b,0);
        if(counter==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
