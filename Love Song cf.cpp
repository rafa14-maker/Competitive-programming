#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n,q;
  cin>>n>>q;
  string s;
  cin>>s;
  long long arr[n+5];
  for(int i=0;i<n;i++)arr[i]=0;

  for(int i=0;i<n;i++)
  {
      int k = (int)s[i]-'a'+1;
      arr[i]+=k;
  }

  for(int i=1;i<n;i++)arr[i]+=arr[i-1];

  while(q--)
  {
      int l,r;
      cin>>l>>r;
      if(l==1)cout<<arr[r-1]<<endl;
      else cout<<arr[r-1]-arr[l-2]<<endl;
  }

}

int main()
{
  //  int q;
  //  cin>>q;
  //  while(q--)
  solve();
}

