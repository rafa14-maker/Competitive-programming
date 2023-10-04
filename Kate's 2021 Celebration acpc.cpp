#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n,k;
   cin>>n;
   int sum=1e8,idx=0;
   for(int i=0;i<n;i++)
   {
       cin>>k;
       string s;
       cin>>s;
       int a=0,b=0,c=0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='1')a++;
           else if(s[i]=='0')b++;
           else if(s[i]=='2')c++;
       }
       if(c>=2&&a>=1&&b>=1)
       {
           if(sum>k)
           {
               sum=k;
               idx=i+1;
           }
       }
   }
   cout<<idx<<endl;
}

int main()
{
  solve();
}
