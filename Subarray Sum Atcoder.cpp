#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,s;
    cin>>n>>k>>s;
   for(int i=0;i<n;i++)
   {
       if(i<k)cout<<s<<" ";
       else if(i<n-1)
       {
           if(s+1>n)
           {
               cout<<1<<" ";
           }
           else cout<<s+1<<" ";
       }
       else
       {
            if(s+1>n)
           {
               cout<<1<<endl;
           }
           else cout<<s+1<<endl;
       }
   }
}
