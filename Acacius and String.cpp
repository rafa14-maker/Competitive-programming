#include<bits/stdc++.h>
using namespace std;

string frr="abacaba";

int check(string s)
{
    int counter=0;
    for(int i=0;i<s.size()-6;i++)
    {
       if(s.substr(i,7)==frr)counter++;
    }
   return counter;
}

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int p=check(s);
    if(p==1)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<s.size();i++)if(s[i]=='?')s[i]='z';
        cout<<s<<endl;
        return ;
    }
    else if(p>1)
    {
        cout<<"NO"<<endl;
        return ;
    }
    for(int i=0;i<s.size()-6;i++)
    {
        string krr=s;
        for(int j=0;j<frr.size();j++)
        {
            if(krr[i+j]=='?'){krr[i+j]=frr[j];}
        }
        int p=check(krr);
        if(p==1)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<krr.size();i++)if(krr[i]=='?')krr[i]='z';
            cout<<krr<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
