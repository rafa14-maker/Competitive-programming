#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

using ll=long long;
#define hello ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define read()          freopen("in.txt","r",stdin)
#define write()         freopen("out.txt","w",stdout)
#define en   "\n"

int Set(int n,int pos)
{
    return (n | (1<<pos));
}
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}

int arr[N],frr[N];

vector<int>v;
set<int>st;
map<int,int>mp;

void bk()
{
    v.clear();
    st.clear();
    mp.clear();
    for(int i=0;i<=30;i++)frr[i]=0;
}

void solve()
{
  bk();
  string s;
  cin>>s;
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)cin>>arr[i];

  for(int i=0;i<s.size();i++)
  {
      int k=s[i]-'a';
      frr[k]++;
  }
  //for(int i=0;i<=30;i++)cout<<frr[i]<<" ";cout<<endl;
  int idx=30;

  while(1)
  {
      v.clear();
      for(int i=1;i<=n;i++)
      {
          if(arr[i]==0)
          {
              v.push_back(i);
              arr[i]=1e6;
          }
      }
      if(v.size()==0)break;

      for(int i=1;i<=n;i++)
      {
              for(int j=0;j<v.size();j++)
              {
                  arr[i]-=abs(i-v[j]);
              }
      }
  //cout<<idx<<" "<<v.size()<<endl;
      while(idx>=0)
      {
          if(v.size()<=frr[idx])
          {
              for(int i=0;i<v.size();i++)
              {
                  mp[v[i]]=idx;
              }
              frr[idx]-=v.size();
              break;
          }
          idx--;
      }
  }
  for(int i=1;i<=n;i++)
  {
      char a=mp[i]+'a';
      cout<<a;
  }
  cout<<endl;
}


int main()
{
    hello;
    int q;cin>>q;while(q--)solve();

   // solve();
}

