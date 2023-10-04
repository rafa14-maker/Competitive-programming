#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(m%2==0&&m/2-1>n)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(m%2==1&&(m-1)/2>n)
    {
          cout<<"-1"<<endl;
        return 0;
    }
    if(n-1>m)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(n>m)
    {
     while(n>0||m>0)
     {
         if(n>0)
         {
             cout<<0;
             n--;
         }
         if(m>0)
         {
             cout<<1;
             m--;
         }
     }
     return 0;
    }

   int k=0,l=n;

   if(n>m/2)
   {
       k=n-(m/2);
       l=n-k;
       if(k+l!=n)
       {
           l++;
       }
   }
  // cout<<l<<" "<<k<<endl;
  while(m>0||l>0||k>0)
   {
       if(m>0){
       cout<<1;
       m--;}
       if(k>0)
       {
           cout<<0;
           k--;
       }
       if(m>0)
       {
           cout<<1;
           m--;
       }
       if(l>0)
       {
           cout<<0;
           l--;
       }
   }


}

