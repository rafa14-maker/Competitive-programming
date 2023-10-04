#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c1,c2,h;
    cin>>n>>c1>>c2>>h;
    string s;
    cin>>s;
    int sum=0;
    if(c1+h<c2)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                sum+=h;
                s[i]='0';
            }
        }
    }
    else if(c2+h<c1)
    {
         for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                sum+=h;
                s[i]='1';
            }
        }
    }

 for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                sum+=c1;
               // s[i]='1';
            }
            else sum+=c2;
        }

    cout<<sum<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
  //  solve();
}

