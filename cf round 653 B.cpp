#include<bits/stdc++.h>
using namespace std;

void solve()
{
  long long k;
  cin>>k;
  if(k==1)
  {
      cout<<0<<endl;
      return;
  }
  int two=0,three=0;
  for(int i=2;i<=3;i++)
  {
      while(k%i==0)
      {
          k/=i;
          if(i==2)two++;
          else if(i==3)three++;
      }
  }
  if((two==0&&three==0)||(three==0)||k>1)
  {
      cout<<-1<<endl;
  }
 else if(two>three)
  {
      cout<<-1<<endl;
  }
 else if(two==three)
  {
      cout<<two<<endl;
  }
  else if(two<three)
  {
      cout<<three+abs(two-three)<<endl;
  }
}

int main()
{
    int q;cin>>q;while(q--)solve();

   // solve();
}

