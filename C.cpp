#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  ll n,m,a;
  cin>>n>>m>>a;
  ll  b = n*m -a;

   if(b%n==0||b%m==0)
   {
       cout<<1<<endl;
       return ;
   }
   else
   {
       vector<ll>v;
       for(int i=2;i<=sqrt(b);i++)
       {
           if(b%i==0)
           {
               v.push_back(i);
           }
       }
       bool tr=false;

       for(int i=0;i<v.size();i++)
       {
           ll k=v[i];
           ll p = b/k;
           if(k<=n&&p<=m||k<=m&&p<=n)
           {
               if((n*m)-(k*p)==a)tr=true;
           }
       }

       int pk = sqrt(b);

       if(pk*pk ==b)cout<<2<<endl;
      else cout<<3<<endl;

   }
}

int main()
{
    solve();
}

