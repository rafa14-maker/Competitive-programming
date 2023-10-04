#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

vector<int>v;
const int N = 1e5+5;
int frr[N];

void call()
{
    for(int i=1;i<N;i++)
    {
        if(i%7==0)frr[i] = 1;
        else
        {
            int k = i;
            bool tr = false;
            while(k>0)
            {
                int r = k%10;
                if(r==7)tr = true;
                k /= 10;
            }
            if(tr)
            {
               frr[i] = 1;
            }
        }
    }

}

void solve()
{
   // cout<<"yes"<<endl;
   int n,m,k;

   while(1)
   {
       cin>>n>>m>>k;

       if(n==0&&m==0&&k==0)break;

      int cnt = 0 ;
      int idx = 0;

      for(int i=1;i<N;i++)
      {
        //  cout<<idx<<endl;
        if(cnt == 0)  idx++;
        else idx -- ;
          if(frr[i]>=1)
          {
               if(idx == m)
               {
                   k--;
                   if(k<=0)
                   {
                       cout<<i<<endl;
                       break;
                   }
               }
          }
          if(idx == n)cnt = 1;
          else if(idx==1)cnt = 0;
      }

   }

}

int main()
{
    CherryFrog;

    call();

  //  for(int i=0;i<30;i++)cout<<v[i]<<" ";cout<<endl;

  // int q;cin>>q;while(q--)solve();
     solve();
}

