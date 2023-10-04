#include<bits/stdc++.h>
using namespace std;

int vrr[100],brr[100],orr[100],s,k,l=1;

int main()
{
   cin>>s>>k;
   int p=1;
   brr[0]=orr[0]=1;
   for(;b[p-1]<=s;p++)
   {
       brr[p]=orr[p-1]-((p<k+1)?0:orr[p-k-1]);
       orr[p]=brr[p]+orr[p-1];
   }
   while(s)
   {
       int x=0;
       for(;brr[x]<=s;x++)
       {
           vrr[l++]=b[x-1];
           s-=brr[x-1];
       }
   }
   cout<<l<<endl;
   for(int i=0;i<l;i++)
   {
       cout<<vrr[i]<<endl;
   }
}
