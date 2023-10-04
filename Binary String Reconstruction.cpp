#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        string s;

        if(n==0&&k==0)
        {
          for(int i=1;i<=m+1;i++)
          {
              if(i%2==1)cout<<1;
              else cout<<0;
          }
          cout<<endl;
          continue;
        }

        int flag=0;
     if(n!=0)  for(int i=1;i<=n+1;i++)s+='0',flag=1;

     if(k!=0)
     {
         for(int i=1;i<=k+1;i++)
         {
             if(flag==1)flag=3;
             s+='1';
         }
     }

       if(flag==3)m--;

     if(m!=0){  for(int i=1;i<=m;i++)
       {
           int p=s.size()-1;
           if(s[p]=='0')s+='1';
           else s+='0';
       }}
       cout<<s<<endl;
    }
}
