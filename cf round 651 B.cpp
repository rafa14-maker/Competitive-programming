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
  //bk();

  int n;
  cin>>n;
  for(int i=0;i<n*2;i++)
  {
      cin>>arr[i];
  }
  vector<pair<int,int> >vk;

  for(int i=0;i<n*2;i++)
  {
      if(arr[i]!=0)
      {
          for(int j=0;j<n*2;j++)
          {
              if(i!=j&&arr[i]!=0&&arr[j]!=0&&(arr[i]%2==arr[j]%2))
              {
                  vk.push_back(make_pair(i+1,j+1));
                  arr[i]=0;
                  arr[j]=0;
               //   break;
              }
          }
      }
  }
   int k=n*2+2;
   k/=2;
  for(int i=0;i<n-1;i++)cout<<vk[i].first<<" "<<vk[i].second<<endl;

}


int main()
{
    hello;
    int q;cin>>q;while(q--)solve();

   // solve();
}
