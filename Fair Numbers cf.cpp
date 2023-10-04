#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    for(long long i=n;;i++)
    {
      //  vector<int>v;
      bool tr=true;
        int a;
        a=i;
      while(a>0)
      {
          int r=a%10;
          a/=10;
          if(r!=0&&i%r!=0)tr=false;
      }
      if(tr)
      {
          cout<<i<<endl;
          return ;
      }
    }
}

int main()
{
   int q;
   cin>>q;
   while(q--)solve();
}
