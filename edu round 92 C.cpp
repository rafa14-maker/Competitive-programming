#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<int>adj[15];
string s;

int f(int a,int b)
{
    int cnt=0,odd=0;
    for(int i=0;i<s.size();i++)
    {
        int k=(int)(s[i]-'0');
        if(odd%2==0)
        {
            if(k==a)
            {
                cnt++;
                odd++;
            }

        }
        else if(odd%2==1)
        {
            if(k==b)
            {
                cnt++;
                odd++;
            }
        }
    }
    if(cnt%2==0)return cnt;
    return min(0,cnt-1);
}


void solve()
{
  cin>>s;
  for(int i=0;i<10;i++)adj[i].clear();
  for(int i=0;i<s.size();i++)
  {
      int k=(int)(s[i]-'0');
      adj[k].push_back(i);
  }
  int mn=0;
  for(int i=0;i<10;i++)
  {
      int len=adj[i].size();
      mn=max(mn,len);
  }
  for(int i=0;i<10;i++)
  {
      for(int j=0;j<10;j++)
      {
          mn=max(mn,f(i,j));
      }
  }

  cout<<s.size()-mn<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
    //solve();
}

