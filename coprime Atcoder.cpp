#include<bits/stdc++.h>
using namespace std;

const int N =1e6;
bool prime[N];

int main()
{
    int n;
    cin>>n;
    int arr[n+5];

    bool tr=false;
    bool kp=false;

   // memset(prime,false,sizeof prime);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)tr=true;
        if(arr[i]==0)kp=true;
       if(!prime[arr[i]]) prime[arr[i]]=true;
       else if(prime[arr[i]]&&arr[i]>1)tr=false;
    }

   for(int i=0;i<=N;i++)
   {
       if(i==1||i==0)continue;
      int cnt=0;
      for(int j=i;j<=N;j+=i)
      {
          if(prime[j])cnt++;
      }
      if(cnt>=2)tr=false;
   }

   if(tr&&!kp)
   {
       cout<<"pairwise coprime"<<endl;
       return 0;
   }

   int k=arr[0];

   for(int i=0;i<n;i++)
   {
       k=__gcd(k,arr[i]);
   }

   if(k==1)
   {
       cout<<"setwise coprime"<<endl;
   }
   else
   {
       cout<<"not coprime"<<endl;
   }

}
