#include<bits/stdc++.h>
using namespace std;

const int N =1e3+5;
bool prime[N];
vector<int>v;
long long mod = 1e9+7;

void seive()
{
   for(int i=1;i<=N;i++)prime[i]=true;

   for(int i=2;i*i<=N;i++)
   {
       if(prime[i]==true)
       {
           for(int j=i*2;j<=N;j+=i)
           {
               prime[j]=false;
           }
       }
   }
 //  for(int i=2;i<=N;i++)if(prime[i])v.push_back(i);
}

int main()
{
    seive();
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;i++)arr[i]=i;
    map<int,int>mp;

   for(int i=2;i<=n;i++)
   {
       if(prime[i])
       {
           for(int j=1;j<=n;j++)
           {
               while(arr[j]%i==0)
               {
                   arr[j]/=i;
                   mp[i]++;
               }
           }
       }
   }

   long long sum=1;

   for(int i=1;i<=n;i++)
   {
       if(prime[i])
       {
          // cout<<mp[i]<<endl;
           sum*=(mp[i]+1);
           sum=sum%mod;
       }
   }
   cout<<sum<<endl;
}
