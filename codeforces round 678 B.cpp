#include<bits/stdc++.h>
using namespace std;

#define r1 1000
#define m 4294967296

bool prime[r1];
vector<int>arr;

void seive()
{
    for(int i=3;i<=r1;i+=2)prime[i]=true;
    prime[2]=true;

    for(int i=2;i*i<=r1;i++)
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
  int n;
  cin>>n;
  if(prime[n])
  {
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)cout<<1<<" ";
          cout<<endl;
      }
  }
  else
  {
      int arr[n+5][n+5];
       for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)arr[i][j]=1;
      }
      int kp=-1,idx=n-1;
      for(int i=n+1;;i++)
      {
          if(!prime[i]&&prime[i+idx])
          {
              kp=i;
              break;
          }
      }
      int i=0,j=0;
      while(i<n&&j<n)
      {
          arr[i][j]=kp;
          i++;
          j++;
      }
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)cout<<arr[i][j]<<" ";
          cout<<endl;
      }
  }

}

int main()
{
    seive();
    int q;cin>>q;while(q--)solve();
    //solve();
}

