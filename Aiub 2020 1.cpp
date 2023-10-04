#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;

bool prime[N];

void seiveof()
{
    memset(prime,true,sizeof(prime));

    for(int p=2;p*p<=N;p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*2;i<=N;i+=p)
            {
                prime[i]=false;
            }
        }
    }
}

void solve()
{
    seiveof();
  int k;
  cin>>k;
  int cnt=0;
  while(k>=4)
  {
    //  cout<<k<<endl;
      for(int i=2;i<=k;i++)
      {
          if(prime[i]&&prime[abs(k-i)])
          {
              k=abs(i-(k-i));
              break;
          }
      }
      cnt++;
  }
  cout<<cnt<<endl;
}

int main()
{
    //int q;cin>>q;while(q--)solve();
    solve();
}

