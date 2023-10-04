#include<bits/stdc++.h>
using namespace std;

using ll=long long ;

int n,k;

void solve()
{
  int n;
  cin>>n;
  int cnt=0;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      if(a!=1)cnt++;
  }
  cout<<cnt<<endl;
}

int main()
{
 //   int q;scanf("%d",&q);while(q--)solve();
   solve();
}




