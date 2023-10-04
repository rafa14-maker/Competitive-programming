#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin>>n;
  if(n==2)
  {
      cout<<3<<endl;
      return ;
  }
  int sum=0;
  int i=1;
  int kp=1e9;

  for(;;i++)
  {
      sum+=i;
      kp=min(kp,i+abs(sum-n));
      if(sum>=n)break;
  }
  cout<<kp<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
  //  solve();
}

