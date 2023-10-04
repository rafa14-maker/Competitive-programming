#include<bits/stdc++.h>
using namespace std;

long long max1(long long a,long long b)
{
    if(a>=b)return a;
    else return b;
}

int frr[1000000+5];

int main()
{
    int n;
    cin>>n;
    int arr[n+5];

    for(int i=0;i<n;i++)cin>>arr[i],frr[arr[i]]++;
   long long sum=0;
   long long k=0;
   for(int i=1000000;i>=0;i--)
   {
      if(frr[i]>=4)
      {
          sum=max1(k*i,i*i);
          break;
      }
      else if(frr[i]==3)
      {
          if(k!=0)
          {
              k=i*i;
          }
          else
          {
              sum=max1(k*i,sum);
              break;
          }
      }
      else if(frr[i]==2)
      {
          if(k!=0)
          {
              sum=k*i;
              break;
          }
          k=i;
      }
      else if(frr[i]==1)
      {
          if(frr[i-1]>=1)
          {
              if(k!=0){k=(i-1);}
              else
              {
                  sum=k*(i-1);
                  break;
              }
          }
      }

   }
  // cout<<k<<" "<<sum/k<<endl;
   cout<<sum<<endl;
}
