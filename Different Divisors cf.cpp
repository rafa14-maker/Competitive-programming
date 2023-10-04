#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;
bool prime[N];
vector<int>v;

void seive()
{
    for(int i=2;i*i<=N;i++)
    {
        if(prime[i])
        {
            for(int j=i*2;j<=N;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=N;i++)if(prime[i])v.push_back(i);
}

void solve()
{
  int d;
  cin>>d;
   for(int i=0;i<v.size();i++)
   {
       if(v[i]-1>=d)
       {
           for(int j=i+1;j<v.size();j++)
           {
               if(v[j]-v[i]>=d)
               {
                   cout<<v[j]*v[i]<<endl;
                   return ;
               }
           }
       }
   }
}

int main()
{
    memset(prime,true,sizeof prime);
    seive();
  //  for(int i=1;i<=20;i++)if(prime[i])cout<<i<<endl;
    int q;
    cin>>q;
    while(q--)solve();
}
