#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

using ll=long long;
#define hello ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define read()          freopen("in.txt","r",stdin)
#define write()         freopen("out.txt","w",stdout)
#define en   "\n"

int arr[N],frr[N];

vector<int>v;
set<int>st;
map<int,int>mp;

void bk()
{
    v.clear();
    st.clear();
    mp.clear();
}

void solve()
{
  bk();

  ll n;
  cin>>n;


  if(n==1)
  {
      cout<<"FastestFinger"<<endl;
      return;
  }

   if(n==2||n%2==1)
  {
      cout<<"Ashishgup"<<endl;
      return;
  }

  for(int i=2;i<=sqrt(n);i++)
  {
      if(n%i==0)
      {
          if(i%2==1)v.push_back(i);
          if((n/i)%2==1)v.push_back(n/i);
      }
  }

  for(int i=0;i<v.size();i++)
  {
      if(n/v[i]>2)
      {
          cout<<"Ashishgup"<<endl;
          return;
      }
  }
  cout<<"FastestFinger"<<endl;
}


int main()
{
    hello;
   int q;cin>>q;while(q--)solve();

   // solve();
}

