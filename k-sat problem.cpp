#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;cin>>t;
   for(int i=1;i<=t;i++)
   {
       int n,m,k;
       cin>>n>>m>>k;
       int arr[m+1];
       for(int j=1;j<=m;j++)
       {
           arr[j]=0;
       }
       int r=n*k;int p,l;
       while(r--)
       {
           cin>>p;
           if(p<0)
           {
               l=p*-1;
               arr[l]--;
           }
           else
           {
               arr[p]++;
           }
       }
       int ans,counter=0;
       cin>>l;
       for(int j=0;j<l;j++)
       {
           cin>>ans;
           if(arr[ans]>0)
           {
               counter++;
           }
       }
       if(counter>0)printf("Case %d: Yes\n",i);
       else printf("Case %d: No\n",i);
   }
}
