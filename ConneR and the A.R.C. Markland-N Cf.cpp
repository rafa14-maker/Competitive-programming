#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       int n,s,k;
       cin>>n>>s>>k;
       map<long long,long long>mp;
       for(int i=0;i<k;i++)
       {
           int a;
           cin>>a;
           mp[a]=1;
       }
       long long p=0;
       while(1)
       {
           if(s-p>0)
           {
               if(mp[s-p]!=1)
               {
                   cout<<p<<endl;
                   break;
               }
           }
            if(s+p<=n)
           {
               if(mp[s+p]!=1)
               {
                   cout<<p<<endl;
                break;
               }
           }
           p++;
          // if(p>100)break;
       }
    }
}
