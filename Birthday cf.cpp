#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   vector<int>v;
   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       v.push_back(a);
       mp[a]++;
   }
   sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

  // for(int i=0;i<v.size();i++)cout << v[i] << endl;

  deque<int>dq;

  int cnt=0;

  for(int i=0;i<v.size();i++)
  {
      int k = mp[v[i]];
      int a = v[i];
      int p = k/2;
      cnt++;

   //   cout << a << " "<<p<<" "<<k<<endl;
  if(cnt%2==0){
      for(int j=0;j<p;j++)
      {
          dq.push_back(a);
      }
      for(int j=p;j<k;j++)
      {
          dq.push_front(a);
      }
  }
  else
  {
        for(int j=0;j<p;j++)
      {
          dq.push_front(a);
      }
      for(int j=p;j<k;j++)
      {
          dq.push_back(a);
      }
  }
  }

//  cout << dq.size() << endl;

  while(!dq.empty())
  {
      int f = dq.front();
      cout << f<<" ";
      dq.pop_front();
  }

  cout << endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

