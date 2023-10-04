#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==2)
    {
        cout<<2<<endl<<1<<" "<<1<<endl<<1<<" "<<2<<endl;
        return 0;
    }
     int k=1,b=1;
     while(1==1)
     {
         if(b>=n)break;
         k+=2;
         b+=k;
       //  cout<<b<<endl;
     }
    // k-=2;
     int arr[k+1][k+1];
     cout<<k<<endl;

     for(int i=1;i<=k;i+=2)
     {
         if(n==0)break;
         for(int j=1;j<=k;j+=2)
         {
             if(n==0)break;
             cout<<i<<" "<<j<<endl;
             n--;
         }
     }
}
