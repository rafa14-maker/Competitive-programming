#include<bits/stdc++.h>
using namespace std;
using ll =long long;

bool Check(ll n,ll pos)
{
    return (n & (1<<pos));
}

void solve()
{
   ll a,b;
   cin>>a>>b;
   if(a>b)
   {
     cout<<"NO"<<endl;
     return ;
   }

   int k=0,p=0;

  int arr[35]={0},frr[35]={0};

  for(int i=0;i<=30;i++)
  {
      if(Check(a,i))arr[i]=1,k++;
      else arr[i]=0;
      if(Check(b,i))frr[i]=1,p++;
      else frr[i]=0;
  }

  for(int i=30;i>=0;i--)
  {
      if(frr[i]==1&&arr[i]==0)
      {
          for(int j=i;j>=0;j--)
          {
              if(arr[j]==1)
              {
                  arr[i]=1;
                  arr[j]=0;
                  break;
              }
          }
      }
  }


  bool tr=true;

  for(int i=0;i<=30;i++)
  {
      if(arr[i]!=frr[i])tr=false;
  }

  if(tr)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
  // solve();
}

