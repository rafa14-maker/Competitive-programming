#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int r1 = 1e6+5;

bool prime[r1];

void seive()
{
    for(int i=3;i<=r1;i+=2)prime[i]=true;
    prime[2]=true;
   // prime[1]=true;

    for(int i=3;i*i<=r1;i+=2)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<=r1;j+=i)
            {
                prime[j]=false;
            }
        }
    }

}

void solve()
{
   // cout<<"yes"<<endl;
   int n,k;
   cin>>n>>k;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   int cnt =0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==1)
      {
          for(int j=i+k;j<n;j+=k)
          {
              if(arr[j]==1)cnt++;
          }
          for(int j=i-k;j>=0;j-=k)
          {
              if(arr[j]==1)cnt++;
          }
      }
   }
   cout<<cnt<<endl;
}

int main()
{
    seive();
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

