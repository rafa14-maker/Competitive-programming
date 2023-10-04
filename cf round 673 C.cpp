#include<bits/stdc++.h>
using namespace std;

const int N =3e5+5;

map<int,int>mp;
map<int,int>ck;

void solve()
{
  mp.clear();
  ck.clear();
  int n;
  cin>>n;
  int arr[n+5];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      mp[arr[i]]++;
      if(mp[arr[i]]==0)ck[mp[arr[i]]]=mp[arr[i]];
      else ck[mp[arr[i]]]=min(ck[mp[arr[i]]],arr[i]);
  }

 /* for(int i=1;i<N;i++)
  {
      int kp=mp[i];
      if(mp[i]==0)ck[mp[i]]=i;
      else ck[mp[i]]=min(ck[mp[i]],i);
  }*/

  for(int i=0;i<n;i++)
  {
      int kp=n-i;
    if(ck[i]==0)cout<<-1<<" ";
    else cout<<ck[kp]<<" ";
  }
  cout<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();
    //solve();
}
