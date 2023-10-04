#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int sum=0;
       for(int i=0;pow(2,i)<=n;i++)
       {
         if((n&(1<<i))==0)  sum+=pow(2,i);
       }
       if(sum==0)
       {
           int k=0;
           for(int i=1;i<=sqrt(n);i++)
           {
              if(n%i==0)
              {
                 if(n/i!=n) k=max(k,n/i);
                  k=max(k,i);
              }
           }
        sum=k;
         //  cout<<k<<endl;
       }
       else sum^=n;
       cout<<sum<<endl;
    }
}
